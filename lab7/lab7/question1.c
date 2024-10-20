#include<stdio.h>

//Write a C Program that takes an user input array and prints the sum of its elements.

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter %d elements for your array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of the elements in your array is: %d\n", sum);

    return 0;
}