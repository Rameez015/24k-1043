#include<stdio.h>
//Create a program that counts the number of 1s in the binary representation of a number.

int main(){
    int num,i,j;
     printf("enter the number");
     scanf("%d",&num);

     num=num%10;
     if(num==1){
        printf("binary of num is = 1");
     }
     else if(num==2){
        printf("binary of num is = 10");
     }
     else if(num==3){
        printf("binary of num is = 11");
     }
     else if(num==4){
        printf("binary of num is = 100");
     }
     else if(num==5){
        printf("binary of num is = 101");
     }
     else if(num==6){
        printf("binary of num is = 110");
     }
     else if(num==7){
        printf("binary of num is = 111");
     }
     else if(num==8){
        printf("binary of num is = 1000");
     }
     else if(num==9){
        printf("binary of num is = 1001");
     }
     else{
        printf("binary of num is = 0");
     }
    return 0;
}