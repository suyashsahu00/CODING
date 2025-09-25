//input any alphabet and check whether it is an alphabet digit or a special character

#include <stdio.h>

int main() {
    char ch;

    // input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    //check whether it is an alphabet digit or a special character

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
         printf("%c is a alphabet\n", ch);
    } else if(ch =='0' || ch =='1' || ch =='2' ||ch =='3' ||ch =='4' ||ch =='5' ||ch =='6' ||ch =='7' ||ch =='8' || ch =='9' ){
            printf("%c is a digit.\n", ch);
        
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}