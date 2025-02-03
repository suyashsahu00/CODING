#include <stdio.h>

// Utility function to find the minimum of two numbers
int min(int x, int y) {
    return (x <= y) ? x : y;
}

// Fibonacci search function
int fibonacciSearch(int arr[], int x, int n) {
    // Initialize the first two Fibonacci numbers
    int fibMMm2 = 0; // (m-2)'th Fibonacci number
    int fibMMm1 = 1; // (m-1)'th Fibonacci number
    int fibM = fibMMm2 + fibMMm1; // m'th Fibonacci number

    // fibM is going to store the smallest Fibonacci number greater than or equal to n
    while (fibM < n) {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }

    // Marks the eliminated range from front
    int offset = -1;

    // While there are elements to be inspected
    while (fibM > 1) {
        // Check if fibMMm2 is a valid location
        int i = min(offset + fibMMm2, n - 1);

        // If x is greater than the value at index fibMMm2, cut the subarray array from offset to i
        if (arr[i] < x) {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        } 
        // If x is less than the value at index fibMMm2, cut the subarray after i+1
        else if (arr[i] > x) {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        } 
        // Element found
        else {
            return i;
        }
    }

    // Comparing the last element with x
    if (fibMMm1 && arr[offset + 1] == x) {
        return offset + 1;
    }

    // Element not found
    return -1;
}

int main() {
    int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 85;
    int index = fibonacciSearch(arr, x, n);
    if (index >= 0) {
        printf("Found at index: %d\n", index);
    } else {
        printf("Not found\n");
    }
    return 0;
}
