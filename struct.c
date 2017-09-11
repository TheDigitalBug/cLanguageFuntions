
#include <stdio.h>

struct structOne
{
	int a;
	int b;
	int c;
};

struct structOneSetSize
{
	int a:16;
	short b:16;
	int c:1;
};

struct structTwo
{
	long a;
	int b;
	int c;
};

struct structThree
{
	char a;
	char b;
	char c;
};

struct structFour
{
	char a;
	int  b;
	char c;
};

struct structFive
{
	char a;
	int  b;
	char c;
};

int main(void)
{


	struct structOne one;
	struct structOneSetSize oneSetSize;
	struct structTwo two;
	struct structThree three;
	struct structFour four;
	struct structFive five = {'a', 3};
	
	struct structFive *ptrFive;
	
	ptrFive = &five;
	
	
	
	printf("%lu\n", sizeof(one));
	printf("%lu\n", sizeof(oneSetSize));
	printf("%lu\n", sizeof(two));
	printf("%lu\n", sizeof(three));
	printf("%lu\n", sizeof(four));
	printf("%lu\n", sizeof(five));
	
	printf("%c %d %c\n", five.a, five.b, five.c);
	printf("%c %d %c\n", (*ptrFive).a, (*ptrFive).b, (*ptrFive).c);
	printf("%c %d %c\n", ptrFive->a, ptrFive->b, ptrFive->c);
	
	

	return 0;
}

