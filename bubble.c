

#include <stdio.h>

void print_arr(int arr[], int len)
{
	int i = 0;
	
	while(i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}


int main(void)
{
	int arr[] = {-2, 45, 0, 11, -9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int tmp;
	int stop = 1;
	
	while(stop)
	{
		stop = 0;
		i = 0;
		while(i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				stop = 1;
			}
			i++;
		}
		print_arr(arr, size);
	}
}
