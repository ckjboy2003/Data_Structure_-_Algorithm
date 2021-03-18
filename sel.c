#include<stdio.h>

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int select(int list[], int n){
    int i, j, idx;
    for(i = 0; i < n-1; i++){
        idx = i;
        for(j = i + 1; j < n; j ++){
            if(list[j] < list[idx]){
                idx = j;
            }
        }
        swap(&list[i], &list[idx]);
    }
}
