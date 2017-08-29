
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	char				char_;
	short			short_;
	int				int_;
	long				long_;
	long long int	long_long_int_;
	
	float			float_;
	double			double_;
	long double		long_double_;
	

	
	int				arr[95];
	


	
	printf("Char = int8_t\n");
	printf("SizeOf char = %zu byte\n", sizeof(char_));
	printf("CHAR_MAX = %d\n", CHAR_MAX);
	printf("CHAR_MIN = %d\n\n", CHAR_MIN);
	
	printf("short = int16_t\n");
	printf("SizeOf short = %zu byte\n", sizeof(short_));
	printf("SHRT_MAX = %d\n", SHRT_MAX);
	printf("SHRT_MIN = %d\n\n", SHRT_MIN);
	
	printf("Int = int32_t\n");
	printf("SizeOf int = %zu byte\n", sizeof(int_));
	printf("INT_MAX = %d\n", INT_MAX);
	printf("INT_MIN = %d\n\n", INT_MIN);
	
	printf("Long = int64_t\n");
	printf("SizeOf long = %zu byte\n", sizeof(long_));
	printf("LONG_MAX = %ld\n", LONG_MAX);
	printf("LONG_MIN = %ld\n\n", LONG_MIN);
	
	printf("long long int = long long\n");
	printf("SizeOf ong long int = %zu byte\n", sizeof(long_long_int_));
	printf("LONG_MAX = %lld\n", LLONG_MAX);
	printf("LONG_MIN = %lld\n\n", LLONG_MIN);
	
	printf("SizeOf float = %zu byte\n", sizeof(float_));
	printf("FLT_MAX = %E\n",FLT_MAX);
	printf("FLT_MIN = %E\n\n", FLT_MIN);
	
	printf("SizeOf double = %zu byte\n", sizeof(double_));
	printf("DBL_MAX = %E\n", DBL_MAX);
	printf("DBL_MIN = %E\n\n", DBL_MIN);
	
	printf("SizeOf long double = %zu byte\n", sizeof(long_double_));
	printf("LDBL_MAX = %LE\n", LDBL_MAX);
	printf("LDBL_MIN = %LE\n\n", LDBL_MIN);
	printf("---------------------------------\n");
	
	int				*pointerInt;
	printf("sizeof(int*)  = %zu byte\n", sizeof(int*));
	printf("sizeof(pointerInt)  = %zu byte\n", sizeof(pointerInt));
	printf("&int_  = %zu byte\n", sizeof(&int_));
	printf("&int_  = %p\n", &int_);
	printf("sizeof(0x7ffeece33984)  = %zu byte\n", sizeof(0x7ffeece33984));
	
	printf("sizeof(*pointerInt)  = %zu byte\n\n", sizeof(*pointerInt));
	
	char			*pointerChar;
	printf("sizeof(char*)  = %zu byte\n", sizeof(char*));
	printf("sizeof(pointerChar)  = %zu byte\n", sizeof(pointerChar));
	printf("sizeof(*pointerChar)  = %zu byte\n\n", sizeof(*pointerChar));
	
	char			*pointerVoid;
	printf("sizeof(void*)  = %zu byte\n", sizeof(void*));
	printf("sizeof(pointerVoid)  = %zu byte\n", sizeof(pointerVoid));
	printf("sizeof(*pointerVoid)  = %zu byte\n\n", sizeof(*pointerVoid));
	
	printf("---------------------------------\n");

	
	printf("sizeof(arr)  = %zu byte\n", sizeof(arr));
	printf("sizeof(arr)/sizeof(arr[0])  = %zu byte\n\n", sizeof(arr)/sizeof(arr[0]));

	int				*arrMalloc;
	arrMalloc = (int*)malloc(sizeof(int) * 117);
	
	printf("sizeof(*arrMalloc)  = %zu byte\n", sizeof(*arrMalloc));
	printf("sizeof(arrMalloc)  = %zu byte\n", sizeof(arrMalloc));
	printf("sizeof(arrMalloc)/sizeof(arr[0])  = %zu byte\n\n", sizeof(arrMalloc)/sizeof(arr[0]));

	return 0;
}
