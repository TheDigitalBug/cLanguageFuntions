
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
	
//	dPtr = &d; //wrong
	*dPtr = 7; // ok
	
	//pointer
	
	int *arr[8];      // array of 8 pointers to int elements
	
	int *(arr1[8]);   // array of 8 pointers to int elements
	
	int (*arr2)[8];   // pointer to array of 8 int elements
	
	int a0 = 0;
	int a1 = 10;
	int a2 = 20;
	int a3 = 30;
	int a4 = 40;
	int a5 = 50;
	int a6 = 60;
	int a7 = 70;
	
	arr[0] = &a0;
	arr[1] = &a1;
	arr[2] = &a2;
	arr[3] = &a3;
	arr[4] = &a4;
	arr[5] = &a5;
	arr[6] = &a6;
	arr[7] = &a7;
	
	arr1[0] = &a0;
	arr1[1] = &a1;
	arr1[2] = &a2;
	arr1[3] = &a3;
	arr1[4] = &a4;
	arr1[5] = &a5;
	arr1[6] = &a6;
	arr1[7] = &a7;

	int mass[8] = {7,6,5,4,3,2,1,0};
	
	arr2 = &mass;
	printf("%d %d %d %d %d %d %d %d\n", a0, a1, a2, a3, a4, a5, a6, a7);
	printf("%d %d %d %d %d %d %d %d\n", *arr[0], *arr[1], *arr[2], *arr[3], *arr[4], *arr[5], *arr[6], *arr[7]);
	printf("%d %d %d %d %d %d %d %d\n", *arr1[0], *arr1[1], *arr1[2], *arr1[3], *arr1[4], *arr1[5], *arr1[6], *arr1[7]);
	
	printf("%d %d %d %d %d %d %d %d\n", *arr2[0], *arr2[1], *arr2[2], *arr2[3], *arr2[4], *arr2[5], *arr2[6], *arr2[7]);
	printf("%d %d %d %d %d %d %d %d\n", *arr2[0], *(arr2[0] + 1), *(arr2[0] + 2), *(arr2[0] + 3), *(arr2[0] + 4), *(arr2[0] + 5), *(arr2[0] + 6), *(arr2[0] + 7));
	return 0;
}

