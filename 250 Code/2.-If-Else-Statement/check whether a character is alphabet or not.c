//check whether a character is alphabet or not

#include <stdio.h>

int main() {
    char ch;

    // input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // check whether the character is alphabet or not
    if ((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')){
        printf("%c is an alphabet\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}