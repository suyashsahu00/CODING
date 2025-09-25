#include <stdio.h>
int main()
{
    char fname[20],mname[20],lname[20];/*person's name*/
    /*accept full name*/
    printf("Enter full name (first middle last):");
    scanf("%s %s %s",fname,mname, lname);
    /*print abbreviated name:*/;
    printf("Abbreviaed name:");
    printf("%c. %c. %s\n",fname[0],mname[0],lname);
    return 0;
}