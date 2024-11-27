/*Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user.*/
#include <stdio.h>
#include <string.h>
void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}