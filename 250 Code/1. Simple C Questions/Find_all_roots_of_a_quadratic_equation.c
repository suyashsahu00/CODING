#include <stdio.h>
#include <math.h>
int main (){
    double a ,b,c;
    double discriminant ,root1,root2, realPart,imaginaryPart;
    
    //Input coefficients a,b and c
    printf("Enter cofficient a,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    //calculate the discrimant 
    discriminant = b*b -4 *a*c;
    //check the nature of the roots
    if (discriminant >0){
        //two distinct and real roots
        root1 =(-b + sqrt(discriminant))/(2*a);
        root2 =(-b -sqrt(discriminant))/(2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n",root1);
        printf("Root 2 = %.2lf\n",root2);

    }else if (discriminant==0)
    //Two equal and real roots
    {
        root1=root2= -b/(2*a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 =%.2lf\n", root1);
    }else{
        //complex roots
        realPart =-b/(2*a);
        imaginaryPart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and different .\n");
        printf("Root 1 = %.2lf + %.2lfi \n",realPart,imaginaryPart);
    }
    return 0;
    

}