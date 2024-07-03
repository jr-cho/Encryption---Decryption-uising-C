#include <ctype.h>
#include "encryption.h"

void encrypt(char* message, int shift) {
    for (int i = 0; message[i] != '\0'; ++i) {
        char ch = message[i];
        
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            message[i] = (ch - offset + shift) % 26 + offset;
        }
    }
}
