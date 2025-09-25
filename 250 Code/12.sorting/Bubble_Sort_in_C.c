#include <stdio.h>
void bubbleSort(int array [],int size){
    for (int step =0; step < size -1; ++step){
        // loop to compare array elementss
        for (int i =0; i <size - step -1; ++i){
            // compare two adjacent element
            // change > to < to sort in descending order 
            if (array[i]> array[i +1]){
                // swap if elements are not in the intended order 
                int temp = array[i];
                array [i] = array[i +1];
                array [i +1]= temp ;
            }
        }
    }
}

//Function to print an array
void printArray (int array [], int size){
    for (int i =0; i <  size ; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main (){
    int data [] ={-2,45, 0,11,-9};
    int size = sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printf("Sorted array in ascending order :\n");
    printArray(data,size);
    return 0;
}

