#include <stdio.h>
int main(){
    float subject1,subject2,subject3,subject4,subject5;
    float total ,percentage;
    //take user input for marks of five subjects
    printf("Enter marks of five subject:");
    scanf("%f %f %f %f %f",&subject1,&subject2,&subject3,&subject4,&subject5);
    // calcualte total marks
    total=subject1 +subject2 +subject3 +subject4 +subject5;
    //calulate percentage
    percentage=(total/500)*100;
    // dispaly the result
    printf("Total marks =%.2f\n",total);
    printf("Percentage =%.2f%%\n",percentage);
    return 0;
    
}

/*#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;

    // Take user input for marks of five subjects
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    // Calculate total marks
    total = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Display the result
    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
*/