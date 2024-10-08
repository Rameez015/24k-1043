#include <stdio.h>

//Q) Which loop system would be better for user input. Justify your answer by creating a program
//that takes a value and adds it to a variable and prints it repeatedly until the user enters a zero
//value.
//A) The while and the do while loop both are suitable for user input.

int main() {
    int sum = 0, num;

    do {
        printf("Enter a number");
        scanf("%d", &num);

        if (num != 0) {
            sum += num;
            printf("Current sum: %d\n", sum);
        }
    } while (num != 0);

    printf("Final sum: %d\n", sum);

    return 0;
}