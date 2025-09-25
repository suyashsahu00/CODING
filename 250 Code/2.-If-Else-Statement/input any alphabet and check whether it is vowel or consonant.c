//input any alphabet and check whether it is vowel or consonant

#include <stdio.h>

int main() {
    char ch;

    // input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // check whether the character is vowel or consonant
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}