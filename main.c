#include "time.h"
#include "Selection_Sort/SelectionSort.c"

int main() {
//SelectionSort:
    int arr[] = {11, 25, 76,43,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    float startTime = (float) clock() / CLOCKS_PER_SEC;
    selectionSort_algorithms(arr, n);
    float endTime = (float) clock() / CLOCKS_PER_SEC;
    float timeElapsed = endTime - startTime;
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("El tiempo que tardó en ordenarlo fue: %f ", timeElapsed);
    return 0;
//Termina SelectionSort
}