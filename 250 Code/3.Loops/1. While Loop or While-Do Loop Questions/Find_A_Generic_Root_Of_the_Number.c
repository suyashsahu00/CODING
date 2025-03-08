#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    temp = num;

    while (temp != 0 || sum > 9) {
        if (temp == 0) {
            temp = sum;
            sum = 0;
        }
        
        rem = temp % 10; // Fetches the last digit of the number
        sum += rem;      // Adds the value to the sum
        temp /= 10;      // Fetches the quotient
    }

    printf("Digital root: %d\n", sum);
    return 0;
}
