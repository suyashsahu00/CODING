//find whether a number is even or Odd


#include <stdio.h>

int main(){
    int number;
    
    printf("Enter a number:");
    scanf("%d",&number); 
    
    //divisible by 2 i.e even
    int divisibleby2 =(number %2==0);
    
    
    if(divisibleby2 ){
        printf("%d :Number is even number",number);
    }else{
        printf("%d: Number is odd number,",number);}
   return 0;
   }