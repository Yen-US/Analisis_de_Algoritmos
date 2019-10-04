// C program for insertion sort

#include <math.h>
#include <stdio.h>
#include <time.h>

/* Function to sort an int array using insertion sort*/
void insertionSort(int arr[], int n) //2T
{
    int i, key, j; //3T
    for (i = 1; i < n; i++) { //1T, (n+1)T + NT
        key = arr[i];  //1T
        j = i - 1;  // 2T

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) { //3NT
            arr[j + 1] = arr[j]; //2T
            j = j - 1; //2T
        }
        arr[j + 1] = key; //2T

        /*
            Due to there is a while loop inside a foor loop
            it is gonna be execute as long as the foor loop
            will be execute, for that the O notation for this
            Insertion Sort is O(N^2)
         */
    }
}

// An utility function to print an array of size n
void printArrayI(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
