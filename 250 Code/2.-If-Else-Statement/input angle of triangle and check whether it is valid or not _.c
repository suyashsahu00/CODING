//input angle of triangle and check whether it is valid or not 

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input angles of the triangle
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check if the angles form a valid triangle
    if (angle1 + angle2 + angle3 == 180) {
        printf("It is a valid triangle.\n");
    } else {
        printf("It is not a valid triangle.\n");
    }

    return 0;
}