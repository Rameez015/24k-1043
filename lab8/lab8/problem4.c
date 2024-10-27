#include <stdio.h>
#include <math.h>
//Write a C program that generates a sequence of prime numbers within a given range using
// nested loops.
int main() {
    int start, end, i, j;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++) {
        int Prime = 1;
        for (j = 2; j<=sqrt(i); j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {                         
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}