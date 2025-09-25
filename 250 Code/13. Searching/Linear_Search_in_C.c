#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Element to search for

    int result = linearSearch(arr, n, x);
    if (result != -1) {
        printf("Element %d is present at index %d\n", x, result);
    } else {
        printf("Element %d is not present in the array\n", x);
    }

    return 0;
}

