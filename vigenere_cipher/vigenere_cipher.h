#ifndef VIGENERE_CIPHER_H
#define VIGENERE_CIPHER_H

#include <stdio.h>

char *vigenere_encryption(const char *plaintext, const char *key);
char *vigenere_decryption(const char *ciphertext, const char *key);
void vigenere_coincidences(const char *message, int displacements);

#endif