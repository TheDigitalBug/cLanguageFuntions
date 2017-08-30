
#include <stdio.h>


union myUnion
{
	int		nb;
	char		c[4];
};

int main(void)
{
	union myUnion getEndian;
	
	getEndian.nb = 1;
	
	if (getEndian.c[0] == 1)
		puts("Little");
	else
		puts("Big");
}

