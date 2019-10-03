#include "time.h"
#include "Selection_Sort/SelectionSort.c"
#include "Insertion_Sort/InsertionSort.c"
#include "Bubble_Sort/BubbleSort.c"

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
//Termina SelectionSort

//Bubble Sort
    int arrBub[] = {64, 34, 25, 600, 12, 22, 11, 90};
    int nBub = sizeof(arrBub)/sizeof(arrBub[0]);
    float startTimeBub = (float) clock() / CLOCKS_PER_SEC;
    bubbleSort(arrBub, nBub);
    float endTimeBub = (float) clock() / CLOCKS_PER_SEC;
    float timeElapsedBub = endTimeBub - startTimeBub;
    printf("Sorted array: \n");
    printArray(arrBub, nBub);
    printf("El tiempo que tardó en ordenarlo fue: %f ", timeElapsedBub);
//Fin Bubble Sort



    return 0;
}