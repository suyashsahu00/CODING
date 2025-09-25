//A Character Is an Alphabet or Not
#include <stdio.h>
int main (){
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);
    if ((ch >='a' && ch<='z') ||(ch>='A' && ch<='Z')){
        printf("%c Echarter is an Alphabet.\n",ch);
    }else{
        printf("%c is not an Alphabet.\n",ch);
    }
    return 0;
}