// Author: Sam Lin
// Date: 2021/03/15
// Algorithm: binary search

#include<stdio.h>

int binary_search(int arr[], int low, int high, int guess){
    while(low <= high){
        int mid = low+(high-low) / 2;
        if(guess == arr[mid]){
            return mid;
        }
        else if(guess < arr[mid]){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(void){
    int guess;
    printf("please input a number \n");
    scanf("%d",&guess);

    int arr[]={1,2,10,20,30,100,200};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n - 1, guess);

    (result == -1) ? printf("the number is not present in the array\n") : printf("the number found at %d\n", result);

    return 0;
}
