#include <stdio.h>
int main(){
    int weeknum;
    printf("Enter the week number (1-7):");
    scanf("%d",&weeknum);
    if (weeknum==1){
        printf("Monday\n");
    } else if (weeknum==2)
    {
        printf("Tuesday\n");
    }else if (weeknum==3)
    {
        printf("Wednesday\n");
    }else if (weeknum==4)
    {
        printf("Thursday\n");
    }else if (weeknum==5)
    {
       printf("Friday\n");
    }else if (weeknum==6)
    {
        printf("Saturday\n");
    }else if (weeknum==7)
    {
        printf("Sunday\n");
    }else{
        printf("invalid number");
    }
    return 0;

}