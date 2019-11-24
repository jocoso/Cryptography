#include "affine_encryption.h"

char single_char_encryption(char to_encrypt, int alpha, int beta) {
    return letters[(alpha * (to_encrypt - 97) + beta) % 26];
}

void string_encryption(char* to_encrypt, int n, int alpha, int beta) {
    char encrypted[n];

    for(int i = 0; i < n; i++) {
        encrypted[i] = single_char_encryption(to_encrypt[i], alpha, beta);
    }

    printf("%s\n", encrypted);
}
