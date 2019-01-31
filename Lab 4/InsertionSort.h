#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements

int insertion_sort(int numbers[], int size){
    int i, j, temp;
    for(i = 1; i < size; i ++){
        j = i;
        while(j>0 && numbers[j-1] > numbers[j]){
            swap(numbers, j, j-1);
            j--;
        }
    }
    
}

// Do not write any code below this line
#endif