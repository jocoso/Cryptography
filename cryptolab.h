#ifndef _CRYPTOLAB_H
#define _CRYPTOLAB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef NULL
    #define NULL 0
#endif

// Made for readability
int getReminder(int, int);

int getMultiplier(int, int);

// Function will assume the first parameter is bigger than the second
// and that both parameters are positive integers > 0
int gcd(int, int);

// Function will assume the first parameter is bigger than the second
// and that both parameters are positive integers > 0
int extended_gcd(int, int, int*, int*);

int mod_inverse(int a, int b);


#endif /*_CRYPTOLAB_H*/
