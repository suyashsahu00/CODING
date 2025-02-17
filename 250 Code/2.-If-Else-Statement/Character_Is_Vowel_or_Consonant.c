//Character Is Vowel or Consonant
#include <stdio.h>
#include <ctype.h> //for the tolower function
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    ch=tolower(ch);

    if (ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
    {
        printf("%c is a vowel.\n",ch);
    }else if ((ch>= 'a' && ch <='z')){
        printf("%c is consonat.\n",ch);
    }else{
        printf("%c is not a letter.\n",ch);
    }
    return 0;
}
