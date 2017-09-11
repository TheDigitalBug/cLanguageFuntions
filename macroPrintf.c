
#include <stdio.h>
#define prd(nb) printf(#nb "=%d\n", nb);
#define prs(str) printf(#str "=%s\n", str);

#define catz(x, y) x ## y


void func(int arr[10])
{
	arr[0] = -1000;
}

void func2(char str[])
{
	str[0] = '_';
}



int main (void)
{
	
	int a = 100;
	int b = 5;

	prd(a/b);
	prs("Hello world!");
	
	char *str = "help ";
	char *str2 = "me";

	puts(str);

	str = catz(str, 2);
	puts(str);

	
	
	
	
	
	
}
