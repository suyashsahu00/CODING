#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x is greater, ignore the left half
        if (arr[mid] < x)
            left = mid + 1;

        // If x is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If the element is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Element to search for

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1) {
        printf("Element %d is present at index %d\n", x, result);
    } else {
        printf("Element %d is not present in the array\n", x);
    }

    return 0;
}
