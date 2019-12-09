#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    
	//ПРОГРАММА НА 3
	printf("Task 1. Integer Types Limits:\n");
	printf("1.1 Char\nSizeof: %ld\nMin: %d\nMax: %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("1.2 Unsigned Char\nSizeof: %ld\nMin: %d\nMax: %d\n\n", sizeof(unsigned char), 0, UCHAR_MAX);
	printf("2.1 Integer\nSizeof: %ld\nMin: %d\nMax: %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("2.2 Char\nSizeof: %ld\nMin: %d\nMax: %d\n\n", sizeof(unsigned int), 0, UINT_MAX);
	printf("3.1 Short\nSizeof: %ld\nMin: %d\nMax: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("3.2 Unsigned Short\nSizeof: %ld\nMin: %d\nMax: %d\n\n", sizeof(unsigned short), 0, USHRT_MAX);
	printf("4.1 Long\nSizeof: %ld\nMin: %ld\nMax: %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("4.2 Unsigned Long\nSizeof: %ld\nMin: %d\nMax: %ld\n\n", sizeof(unsigned long), 0, ULONG_MAX);
	printf("5.1 Long Long\nSizeof: %ld\nMin: %lld\nMax: %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("5.2 Char\nSizeof: %ld\nMin: %d\nMax: %lld\n\n", sizeof(unsigned long long), 0, ULLONG_MAX);


	//ПРОГРАММА НА 4
	printf("Task 2. Float Types Limits:\n");
	printf("1. Float\nSizeof: %ld\nMin: %f\nMax: %f\n\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("2. Double\nSizeof: %ld\nMin: %f\nMax: %f\n\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("3. Long Double\nSizeof: %ld\nMin: %Lf\nMax: %Lf\n\n", sizeof(long double), LDBL_MIN, LDBL_MAX);


	//ПРОГРАММА НА 5
	printf("Task 3. Type overflow:\n");
	int val = 2147483647;
	printf("We have integer variable with value %d\n", val);
	val = val + 1;
	printf("If we add to it 1, we will get %d\n", val);
}