#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &num); // e.g., num = 5789

    temp = num; // temp = 5789

    do {
        rem = temp % 10; // rem = 9 // rem = 8 // rem = 7 // rem = 5 // (fetches the last digit of the number)
        sum += rem; // sum = 9 // sum = 17 // sum = 24 // sum = 29 (adds the value to the sum)
        temp /= 10; // temp = 578 // temp = 57 // temp = 5 // temp = 0 (fetches the quotient)
        
        if (temp == 0 && sum > 9) { // temp = 0 // sum = 29 (check if temp is 0 and sum > 9)
            temp = sum; // temp = 29
            sum = 0; // reset sum to 0 for the next iteration
        }
    } while (temp != 0); // continue loop until temp becomes 0

    printf("Digital root: %d\n", sum); // Digital root: 2
    return 0;
}
