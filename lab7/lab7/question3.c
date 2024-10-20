#include<stdio.h>
//Write a C Program to find the minimum and maximum number in an array.
int main (){
        int n, i, max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in the array:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     max = arr[0];

     min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum Number = %d\n", max);
    printf("Minimum Number = %d\n", min);


    return 0;
}