
#include <stdio.h>


#include <stdio.h>

int	funtionOne(int nb)
{
	return (nb * 10);
}

int	funtionTwo(int nb)
{
	return (nb * 20);
}

int	funtionThree(int nb)
{
	return (nb * 30);
}

int	funtionFour(int nb)
{
	return (nb * 40);
}


int main(void)
{
	// ptr-----------------------------------------
	
	int a = 123;
	int	*aPtr;
	
	aPtr = &a;
	printf("a = %d aPtr = %d\n\n", a, *aPtr);
	
	
	//ptrToPtr-------------------------------------
	int b = 456;
	int	*bPtr;
	int	**bDoublePtr;
	
	bPtr = &b;
	bDoublePtr = &bPtr;
	printf("b = %d bPtr = %d bDoublePtr = %d\n", b, *bPtr, **bDoublePtr);
	printf("&b = %p &bPtr = %p &bDoublePtr = %p\n\n", &b, bPtr, *bDoublePtr);
	
	//ptrToFunction-------------------------------------
	int (*functionPtr[4])(int);
	
	functionPtr[0] = funtionOne;
	functionPtr[1] = funtionTwo;
	functionPtr[2] = funtionThree;
	functionPtr[3] = funtionFour;
	
	int nbr = 1;
	printf("%d\n", functionPtr[0](nbr));
	printf("%d\n", functionPtr[1](nbr));
	printf("%d\n", functionPtr[2](nbr));
	printf("%d\n\n", functionPtr[3](nbr));
	
	//constPtr-------------------------------------
	int c = 10;
	const int *cPtr; // same as int const *cPtr;
	
	cPtr = &c; // ok
//	*cPtr = 7; // wrong
	
	int d = 33;
	int * const dPtr = &d;
	
	dPtr = &d; //wrong
	*dPtr = 7; // ok

	return 0;
}

