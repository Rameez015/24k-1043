#include<stdio.h>
//Given an array arr[] of size N which contains elements from 0 to N-1, you need to
//find all the elements occurring more than once in the given array.
void findSameElements(int arr[], int n) {
    int count[n] = {0};

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    printf("Numbers occurring more than once in the array:\n");
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            printf("%d \n", i);
        }
    }
}

int main (){
    int arr[] = {2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findSameElements(arr, n);
    return 0;
}