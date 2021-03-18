#include<stdio.h>

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void select_sort(int arr[], int n){
    int i,j,min_idx;
    for(i = 0; i < n -1; i++){
        min_idx = i;
        for( j = i + 1; j < n; j++){
            if(arr[min_idx] < arr[j]){
                min_idx = j;   
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("value in array: %d\n", arr[i]);
    }
}

int main(void){
    int arr[] = {2,1,3,5,6,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    select_sort(arr, size);
    printArray(arr, size);
    return 0;

}
