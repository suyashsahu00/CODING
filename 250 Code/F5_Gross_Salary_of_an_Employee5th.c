#include <stdio.h>

int main() {
    float basic, hra, da, gross_salary;

    // Take user input for basic salary
    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic);

    // Calculate HRA and DA based on basic salary
    if (basic <= 10000) {
        hra = basic * 0.08;
        da = basic * 0.10;
    } else if (basic <= 20000) {
        hra = basic * 0.16;
        da = basic * 0.20;
    } else {
        hra = basic * 0.24;
        da = basic * 0.30;
    }

    // Calculate gross salary
    gross_salary = basic + hra + da;

    // Display the result
    printf("Gross Salary of the employee is: %.2f\n", gross_salary);

    return 0;
}
