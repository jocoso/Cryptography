#include "affine_encryption.h"
#include "../cryptolab.c"

char single_char_encryption(char to_encrypt, int alpha, int beta) {
    return letters[(alpha * (to_encrypt - 97) + beta) % 26];
}

char single_char_decryption(char to_decrypt, int alpha, int beta) {
    int solo = to_decrypt - 97;
    int alpha_inverse = mod_inverse(alpha, 26);
    int c1 = -beta * alpha_inverse;

    c1 = (c1 > 0) ? c1 : 26 + c1;

    int c2 = (alpha_inverse * solo) + c1;
    c2 = c2 % 26;
    return (char) c2 + 97;
}

void string_encryption(const char* to_encrypt, int n, int alpha, int beta) {
    char encrypted[n];

    for(int i = 0; i < n; i++) {
        encrypted[i] = single_char_encryption(to_encrypt[i], alpha, beta);
    }

    printf("%s\n", encrypted);
}

void string_decryption(const char* to_decrypt, int n, int alpha, int beta) {
    char decrypted[n];

    for(int i = 0; i < n; i++) {
        decrypted[i] = single_char_decryption(to_decrypt[i], alpha, beta);
    }

    printf("%s\n", decrypted);
}

int main() {
    string_decryption("cvvwpm", 6, 9, 2);
    //printf("%c", single_char_decryption('v', 9, 2));
    return 0;
}
