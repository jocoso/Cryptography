#include "cryptolab.c"
#include <stdio.h>

int main() {
	int a = 29;
	int b = 17;

	printf("gcd of %d and %d is %d.\n", a, b, gcd_verbose(a, b));

	return 0;
}