#include "vigenere_cipher.h"
#include "../tools/tools.c"
#include <string.h>


char *vigenere_encryption(const char *plaintext, const char *key) {
    int plainlen = strlen(plaintext);
    int keylen = strlen(key);
    char *ciphertext = malloc(sizeof(char) * plainlen);

    for(int i = 0; i < plainlen; i++) {
        int j = i % keylen;
        ciphertext[i] = (plaintext[i] - 'a') + (key[j] - 'a');
        ciphertext[i] = mod(ciphertext[i], 26) + 'a';
    }

    return ciphertext;
}

char *vigenere_decryption(const char *ciphertext, const char *key) {
    int cipherlen = strlen(ciphertext);
    int keylen = strlen(key);
    char *plaintext = malloc(sizeof(char) * cipherlen);

    for(int i = 0; i < cipherlen; i++) {
        int j = i % keylen;
        //printf("%d\n", (ciphertext[i] - 'a') - (key[j] - 'a'));
        plaintext[i] = (ciphertext[i] - 'a') - (key[j] - 'a');
        plaintext[i] = mod(plaintext[i], 26) + 'a';
    }

    return plaintext;
}

void vigenere_coincidences(const char *message, int displacements) {
    int messagelen = strlen(message);
    char ciphermessage[messagelen];
    int counter[26];
    int i, index;

    for(i = 0; i < 26; i++) {
        counter[i] = 0;
    }

   

    printf("\n");

    // for(int i = 0; i < 26; i++) {
    //     if(counter[i] != 0)
    //         printf("%c -> %d\n", i + 'a', counter[i]);
    // }
}

int main() {
    char *en = vigenere_encryption("hereishowitworks", "vector");
    int n = strlen(en);
   // printf("%s\n", en);
    //vigenere_coincidences("AABAE", 2);
    char *sa = shift(en, n, 3);

    free(en);
    free(sa);
    return 0;
}