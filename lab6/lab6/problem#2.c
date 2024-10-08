#include <stdio.h>

//Write a program to check whether a given number is a multiple digit number or not.
//1. Example: 123 is a multiple digit number.
//2. 6 is not a multiple digit number.

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        while (num != 0) {
            num /= 10; 
            count++;
        }

        if (count > 1) {
            printf("%d is a multiple digit number.\n", count);
        } else {
            printf("%d is not a multiple digit number.\n", count);
        }
    } else {
        printf("Please enter a number that is greater than 0.\n");
    }

    return 0;
}