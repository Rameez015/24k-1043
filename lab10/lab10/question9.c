/*Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order.*/
#include<stdio.h>
#include<stdlib.h>

void bubblesort_recursion(int *arr, int size) {
    if (size == 1) {
        return;
    }

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    bubblesort_recursion(arr, size - 1);
}

int main() {
    int a; 
    printf("Enter the size of the array : \n");
    scanf("%d", &a);

    int *arr = (int *)malloc(a * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter the elements of the array : \n");
    for (int i = 0; i < a; i++) {
        printf("%d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The UNSORTED array: \n");
    printf("{");
    for (int i = 0; i < a; i++) {
        printf("%d", arr[i]);
        if (i < a - 1)
            printf(", ");
    }
    printf("}\n");

    bubblesort_recursion(arr, a);

    printf("The SORTED array: \n");
    printf("{");
    for (int i = 0; i < a; i++) {
        printf("%d", arr[i]);
        if (i < a - 1)
            printf(", ");
    }
    printf("}\n");

    free(arr);

    return 0;
}