//check whether a number is divisible by 5 and 11 


#include <stdio.h>

int main(){
    int number;
    
    printf("Enter a number:");
    scanf("%d",&number); 
    
    //divisible by 5
    int divisibleby5 =(number %5==0);
    
    //check didvisby 11
    
    int divisibleby11=(number %11==0);
    
    
    //check divisible by both 5 and 11
    if(divisibleby5 && divisibleby11){
        printf("%d :Number is divisible by 5 and 11",number);
    }else{
        printf("Number is not divisible by both 5 and 11");}
   return 0;
   }