#include "cryptolab.h"

// Made for readability


int getReminder(int divisor, int divident) {
	// Divisor: Number we are dividing by
	// Divident: Number being divided
	return divisor % divident;

}

int getMultiplier(int divisor, int divident) {
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


int extended_gcd(int a, int b, int *x, int *y) {
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1; // Store result of recursive call
    int gcd = extended_gcd(b%a, a, &x1, &y1);

    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int mod_inverse(int a, int b) {
    int x, y;
    int g = extended_gcd(a, b, &x, &y);

    if(g != 1) {
        printf("Inverse doesn't exists");
        return -1;
    } else {
        int res = (x % b + b) % b;
        return res;
    }
}