
#include <stdio.h>

void	decToBin(int nb)
{
	int	i = 0;
	char bin[64] = {0};

	while (nb > 0)
	{
		bin[i] = (nb % 2) + '0';
		nb = nb / 2;
		i++;
	}
	i--;
	while(i >= 0)
	{
		printf("%c", bin[i]);
		i--;
	}
	printf("\n");
}

int main (void)
{
	int a = 273;
	int b = 197;
	int c = a & b;
	int d = a | b;
	int e = a ^ b;
	int f = ~b;
	printf("AND:\n\n");
	decToBin(a);
	decToBin(b);
	decToBin(c);
	
	printf("OR:\n\n");
	decToBin(a);
	decToBin(b);
	decToBin(d);
	
	printf("XOR:\n\n");
	decToBin(a);
	decToBin(b);
	decToBin(e);
	
	printf("NO:\n\n");
	decToBin(b);
	decToBin(f);
	
	printf("<< 4 \n\n");
	a = 15;
	c = a << 4;
	printf("a=%d c=a << 4=%d\n", a ,c);
	decToBin(c);

	return 0;
}
