#include "cryptolab.c"


int main(int argc, char **argv) {
    int *out = (int *) malloc(sizeof(int) * 4);

    int a = strtol(argv[1], NULL, 10);
    int b = strtol(argv[2], NULL, 10);

	int* ex_eu = extended_gcd(a, b, out);

	printf("%d, %d, %d, %d", ex_eu[0], ex_eu[1], ex_eu[2], ex_eu[3]);
	// printf("gcd of %d and %d is %d.\n", a, b, gcd_verbose(a, b));
    free(out);
	return 0;
}
