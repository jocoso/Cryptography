#include "cryptolab.c"
#include <stdio.h>

int main() {
	int a = 15;
	int b = 10;

	printf("gcd of %d and %d is %d.\n", a, b, gcd(a, b));

	return 0;
}