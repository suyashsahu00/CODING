#include <stdio.h>
int main(){
    char c;
    int isLowercaseVowel,isUppercaseVowel;

    printf("Enter an alphabet:");
    scanf("%c",&c);
    // check if character is lower case vowel
    isLowercaseVowel=(c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u');
    // check if character is upper case vowel
    isUppercaseVowel=(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
    if (isLowercaseVowel || isUppercaseVowel){
        {
            printf("%c  is Vowel",c);
        }
    }else{
        printf("%c is Consonent",c);
    }
    return 0;


}
