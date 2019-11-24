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

int gcd_verbose(int a, int b) {

	// a = bq + r
	int reminder = getReminder(a, b);
	int multiplier = getMultiplier(a, b);

	while( reminder > 0 ) {
		// XXX: Bad programming but a necessary evil
		printf("%d = %d(%d) + %d\n", a, b, multiplier, reminder);
		a = b;
		b = reminder;
		reminder = getReminder(a, b);
		multiplier = getMultiplier(a, b);
	}

	return b;

}

int* extended_gcd(int a, int b, int* out) {

//    // Get Multiplier and reminder
    int reminder = getReminder(a, b);
    int multiplier = getMultiplier(a, b);

    // In the case the reminder is 0 or 1 the important part happened before
    // This stops the recursion
    if(reminder == 0) return NULL;

    // Allocate memory
    // y: to get from the previous iteration
    // out: output
    int *y = (int *)malloc(sizeof(int) * 4);

    // Recursive part
    y = extended_gcd(b, reminder, out);

    // Because when the reminder of 0 is not important
    if(y == NULL) {
        out[0] = a;
        out[1] = 1;
        out[2] = b;
        out[3] = -1 * multiplier;
        printf("out : %d, %d, %d, %d\n", out[0], out[1], out[2], out[3]);
        return out;
    }

    printf("y : %d, %d, %d, %d multiplier: %d\n", y[0], y[1], y[2], y[3], multiplier);
    *(out + 0) = a;
    memcpy(&out[1], &y[3], sizeof(int));
    printf("y : %d, %d, %d, %d multiplier: %d\n", y[0], y[1], y[2], y[3], multiplier);
    *(out + 2) = b;
    *(out + 3) = y[3] * (-1 * multiplier) + y[1];
    printf("y : %d, %d, %d, %d multiplier: %d\n", y[0], y[1], y[2], y[3], multiplier);
    printf("out : %d, %d, %d, %d\n", out[0], out[1], out[2], out[3]);


    // Sending the pointer to the previous iteration
    return out;
}
