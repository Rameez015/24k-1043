#include<stdio.h>
//Write a program to swap two numbers using bitwise XOR.

int main(){
    int a = 6,b = 8 ;
    a = a^b ;
    b = a^b ; 
    a = a^b ; 
    printf("a= %d",a) ;
    printf("b= %d",b) ;


    return 0;
    
}