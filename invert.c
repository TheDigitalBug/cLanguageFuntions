
#include <stdio.h>

int	invert(int x, int p, int n)
{
	int mask = 1;
	int i = 0;
	
	while(i < p)
	{
		mask = mask << 1;
		if (i < n)
			mask += 1;
		i++;
	}
	return (x ^ mask);
}

int main(void)
{
	int x = 471;

	printf("x=%d inv=%d", x, 	invert(x, 5, 3));
	return (0);
}
