#include <stdio.h>
//Using for-loop statement print the following series:
// 65536,32768,10922,2370,546,91,13,1,0.

int main() {
    int num,j,k;
    printf("enter the the starting point \n");
    scanf("%d",&num);
    printf("enter the terms os series\n");
    scanf("%d",&j);
    
    for(k=1;k<=j;k++){
        printf("%d,",num);
        num=num/k;
    }
    
    return 0;
}