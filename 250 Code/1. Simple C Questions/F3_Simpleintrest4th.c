
#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Take user input for principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest is: %.2f\n", interest);

    return 0;
}
