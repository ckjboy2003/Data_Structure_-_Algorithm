// A simple selection sort as the start for this topic
// Time complexity: O(n2)
// Auxiliary Space: O(1)
// Author: Sam Lin
// Data: 2020/10/11


#include<stdio.h>

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectSort(int *arr, int size){
    int i, mini, j;
    for(i=0; i<size-1; i++){
        mini=i;
        for(j=i+1; j<size; j++){
           if(arr[j] < arr[mini]){
                mini = j;   
           }
            swap(&arr[i], &arr[mini]);
        }
    }
}

void printArray(int *arr, int size){
    for(int i = 0 ; i < size; i++){
        printf("%d\n", *(arr+i));
    }
}

int main(void){
    int arr[] = {3,5,2,1,4,6};
    selectSort(arr, 6);
    printArray(arr, 6);

    return 0;
}
