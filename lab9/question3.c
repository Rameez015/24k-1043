/*Write a program that takes a destination string and a source string as input. Then, take
an integer n as input and append only the first n characters of the source string to the
destination. Print the new concatenated string.*/
#include<stdio.h>
#include<string.h>
int main (){
    char destination[100];
    char source[100];
    int n;
    printf("enter the destination string: ");
    scanf("%s",&destination);
    printf("enter the source string: ");
    scanf("%s",&source);
    printf("enter a number: ");
    scanf("%d",&n);
    strncat(destination, source, n);
    printf("%s", destination);
    return 0;
}