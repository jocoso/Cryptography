#include <stdio.h>

static char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

/* 
*   Given a character and alpha and a beta the function will
*   Perform a basic Affine encryption to the character and
*   return the result
*/
char single_char_encryption(char to_encrypt, int alpha, int beta);

/*
*   Decrypt a single character knowing keys alpha and beta
*/
char single_char_decryption(char to_decrypt, int alpha, int beta);

/*
*   Given an array of character, an alpha and a beta for every character
*   it will perform a subsequent encryption and return the result
*/

void string_encryption(const char* to_encrypt, int n, int alpha, int beta);


/*
*   Given an array of character, an alpha and a beta for every character
*   it will perform a subsequent decryption and return the result
*/
void string_encryption(const char* to_encrypt, int n, int alpha, int beta);