cmake_minimum_required(VERSION 3.14)
project(Analisis_de_Algoritmos C)

set(CMAKE_C_STANDARD 99)

add_executable(Analisis_de_Algoritmos main.c Bubble_Sort/BubbleSort.c Insertion_Sort/InsertionSort.c Selection_Sort/SelectionSort.c)