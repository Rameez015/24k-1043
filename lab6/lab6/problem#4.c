#include <stdio.h>
//Write a program to print the following series: 1, 2, 3, 5, 8, 13.

int main() {
    int i=1,j=2,r=i+j;
    printf("%d,%d,",i,j);

    while(r<=13){
        printf("%d,",r);
        i=j;
        j=r;
        r=i+j;
    }
    
    
    return 0;
}