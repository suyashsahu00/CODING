#include <stdio.h>
#include <ctype.h>
void checkCharacterType (char ch){
    if (isupper(ch)){
        printf("The character '%c' is an Uppercase Letter.\n",ch); 
    } else if(islower(ch)){
        printf("The character '%c' is a Lowercase Letter.\n",ch);
    } else if (isdigit(ch)){
        printf("The character '%c' is a Digit.\n",ch);
    } else {
        printf("The character '%c' is a Special Character.\n",ch);
    }
}

int main(){
    char ch;
    printf("Enter a charcter:");
    scanf("%c",&ch);
    checkCharacterType(ch);
    return 0;

    
}
