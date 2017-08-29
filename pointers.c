
#include <stdio.h>


int main(void)
{
	int a = 123;
	int	*aPtr;
	
	aPtr = &a;
	
	printf("a = %d aPtr = %d\n", a, *aPtr);


	return 0;
}

