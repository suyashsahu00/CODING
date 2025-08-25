//check whether a character is uppercase or lowercase alphabet
#include <stdio.h>

int main() {
    char ch;

    // input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // check whether a character is uppercase or lowercase alphabet
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}