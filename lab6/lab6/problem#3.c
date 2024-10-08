#include <stdio.h>
//Using the program in problem#2.c integrate the number if it is a prime or composite number.

int main() {

    int num1,x,prime;
    printf("enter the number to check the number is prime or composite\n");
    scanf("%d",&num1);
    

    for(x=2;x<=num1/2;x++){
        if(num1%x==0){
            prime=0;
    
        break;

        }
        else{


            prime=1;
        }
    }
    if(prime){
        printf("the number is prime");

    }
    else{
        printf("the number is composite");

    }
    
    return 0;
}