#include "decryption.h"
#include "encryption.h"

void decrypt(char* message, int shift) {
    encrypt(message, 26 - shift); 
}
