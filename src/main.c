#include <stdio.h>
#include <string.h>
#include "encryption.h"
#include "decryption.h"

int main() {
    char message[100];
    int shift;
    char choice;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; 

    printf("Enter shift value: ");
    scanf("%d", &shift);
    shift %= 26; 

   
    while (getchar() != '\n');

    printf("Do you want to (E)ncrypt or (D)ecrypt? ");
    scanf("%c", &choice);

    if (choice == 'E' || choice == 'e') {
        encrypt(message, shift);
        printf("Encrypted message: %s\n", message);
    } else if (choice == 'D' || choice == 'd') {
        decrypt(message, shift);
        printf("Decrypted message: %s\n", message);
    } else {
        printf("Invalid choice\n");
    }

    printf("Press Enter to exit...");
    while (getchar() != '\n');
    getchar();

    return 0;
}