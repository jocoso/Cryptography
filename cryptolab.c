#include "cryptolab.h"

// Made for readability


int getReminder(int divisor, int divident) {
	// Divisor: Number we are dividing by
	// Divident: Number being divided
	return divisor % divident;

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