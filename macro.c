
#include <stdio.h>

#define MAX(A,B) (A > B) ? A : B;

#define SET_A a = 7;

#define SET_C c = 13;

#define PR(X) printf(#X "=%d\n", X);

#define loop(lim) int i = 0; while (i < lim) {PR(i) i++;}



int main(void)
{

	int a = 2;
	int b = 3;
	int res;
	
	res = MAX(a,b);
	printf("a=%d, b=%d, max=%d\n", a, b, res);
	
	SET_A
	res = MAX(a,b);
	printf("a=%d, b=%d, max=%d\n", a, b, res);

	PR(a);
	
	loop(res);
	
	return 0;
}

