
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
	
	if (getEndian.c[3] == 0x01)
		puts("Little");
	else
		puts("Big");

		
	printf("%d\n", getEndian.nb);

//
//	int num = 1;
//	if(*(char *)&num == 1)
//	{
//		printf("\nLittle-Endian\n");
//	}
//	else
//	{
//		printf("Big-Endian\n");
//	}
	
}

