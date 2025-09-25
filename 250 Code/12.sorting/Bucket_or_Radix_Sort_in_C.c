#include <stdio.h>
#include <stdlib.h>

#define BUCKETS 10

void bucketSort(float array[], int size) {
    // Create buckets
    struct Bucket {
        int count;
        float* values;
    } buckets[BUCKETS];

    for (int i = 0; i < BUCKETS; i++) {
        buckets[i].count = 0;
        buckets[i].values = (float*)malloc(size * sizeof(float));
    }

    // Distribute array elements into buckets
    for (int i = 0; i < size; i++) {
        int bucketIndex = array[i] * BUCKETS;
        buckets[bucketIndex].values[buckets[bucketIndex].count++] = array[i];
    }

    // Sort each bucket and concatenate
    for (int i = 0; i < BUCKETS; i++) {
        for (int j = 0; j < buckets[i].count; j++) {
            for (int k = j + 1; k < buckets[i].count; k++) {
                if (buckets[i].values[j] > buckets[i].values[k]) {
                    float temp = buckets[i].values[j];
                    buckets[i].values[j] = buckets[i].values[k];
                    buckets[i].values[k] = temp;
                }
            }
        }
    }

    // Concatenate buckets into original array
    int index = 0;
    for (int i = 0; i < BUCKETS; i++) {
        for (int j = 0; j < buckets[i].count; j++) {
            array[index++] = buckets[i].values[j];
        }
        free(buckets[i].values);
    }
}

void printArray(float array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%f ", array[i]);
    }
    printf("\n");
}

int main() {
    float data[] = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    int size = sizeof(data) / sizeof(data[0]);
    bucketSort(data, size);
    printf("Sorted array:\n");
    printArray(data, size);
    return 0;
}
