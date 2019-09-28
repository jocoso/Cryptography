#include "cryptolab.h"

// Made for readability


int getReminder(int divisor, int divident) {
	// Divisor: Number we are dividing by
	// Divident: Number being divided
	return divisor % divident;

}

int getMultiplicative(int divisor, int divident) {
	return divisor / divident;
}

//------


// EULER'S THEOREM

// Function will assume 'a' is bigger than 'b'
// and that both parameters are positive integers > 0
int gcd(int a, int b) {

	// a = bq + r
	int reminder = getReminder(a, b);


	while( reminder > 0 ) {
		// XXX: Bad programming but a necessary evil
		a = b;
		b = reminder;
		reminder = getReminder(a, b);
	}

	return b;

}

int gcd_verbose(int a, int b) {

	// a = bq + r
	int reminder = getReminder(a, b);
	int multiplicative = getMultiplicative(a, b);

	while( reminder > 0 ) {
		// XXX: Bad programming but a necessary evil
		printf("%d = %d(%d) + %d\n", a, b, multiplicative, reminder);
		a = b;
		b = reminder;
		reminder = getReminder(a, b);
		multiplicative = getMultiplicative(a, b);
	}

	return b;

}