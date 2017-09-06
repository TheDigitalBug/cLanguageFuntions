
#include <stdio.h>

int main(void)
{
	int nb = 31;
	int i = 0;

	printf("number = %d ", nb);
	while(nb)
	{
		if ((nb & 1) == 1)
			i++;
		nb = nb >> 1;
	}
	printf("num of 1s = %d\n", i);
}
	
