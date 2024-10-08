#include <stdio.h>
//Create a C program to calculate the following series using loop statements:
//1,2,2,4,8,32,256,8192,2097152.

int main() {
    
    int number, values;
    printf("Enter the starting point:\n");
    scanf("%d", &number);
    printf("Enter the number of terms:\n");
    scanf("%d", &values);

    for (int i = 1; i <= values; i++) {
        printf("%d,", number);
        number *= 2;

    }

    return 0;
}
