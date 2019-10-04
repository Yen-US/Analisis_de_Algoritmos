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
//Fin SelectionSort

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


//Insertion Sort
    clock_t begin2 = clock();
    int arr2[] = { 45, 33, 899, 26, 98,115,74,2,479,36 }; //A values gives randomly to the array
    int n2 = sizeof(arr2) / sizeof(arr2[0]); //To take the key value in which the array are gonna be split
    insertionSort(arr2, n2); //Using the method to Insertion Sort
    printf("Sorted array: \n");
    printArray(arr2, n2);
    clock_t end2 = clock();
    double time_spent2 = (double)(end2 - begin2) / CLOCKS_PER_SEC;
    printf("El tiempo que tardó en ordenarlo fue: %f ",time_spent2);
//Fin Insertion Sort


    return 0;
}