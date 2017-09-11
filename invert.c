
#include <stdio.h>

int	invert(int x, int p, int n)
{
	int i;
	unsigned int mask = 1;
	
	for (i = 1; i != n; i++)
	{
		mask = (mask << 1) + 1;
	}
	
	mask = mask << (p - n);
	
	return (x ^ mask);
}

int main(void)
{
	int x = 123;

	printf("x=%d inv=%d", x, 	invert(x, 5, 3));
	return (0);
}
