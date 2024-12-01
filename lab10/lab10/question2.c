#include <stdio.h>
#include <string.h>
/*Write a recursive function that takes a string as input and returns the reversed string.*/
void reverse_string_recursive(char *str, int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse_string_recursive(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    reverse_string_recursive(str, 0, len - 1);

    printf("Reversed string: %s\n", str);
    return 0;
}