
#include <stdio.h>
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
	
	int				*pointerInt;
	char				*pointerChar;
	
	
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
	
	printf("SizeOf pointer int  = %zu byte\n", sizeof(pointerInt));
	printf("SizeOf pointer char = %zu byte\n", sizeof(pointerChar));
	return 0;
}
