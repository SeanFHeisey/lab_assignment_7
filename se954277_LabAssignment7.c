#include <stdio.h>
#define SIZE 9

// Sean Heisey
// COP3502
// Lab Assignment # 7
// 3/22/2023

// predefined functions
void bubbleSort(int array[], int size);
void swap(int *x, int *y);
// main function with givin array
int main(){
    int array[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    for(int i=0; i<SIZE; i++)
        printf("%d ", array[i]);
    bubbleSort(array, SIZE);
    for(int i=0; i<SIZE; i++)
        printf("%d ", array[i]);
    return 0;
}
// bubble sort with swaps at each index
void bubbleSort(int array[], int size){
    for(int i=0; i<size; i++){
        int swaps = 0;
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
                swaps++;
            }
        }
        printf("\nAt iteration %d there are %d swaps\n", i, swaps);
    }
}
// swap x and y
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

