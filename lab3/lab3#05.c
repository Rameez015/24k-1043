#include<stdio.h>

int main(){
/*
    if (10<=principal<=1000000,5<=rateOf_interest<=10,1<=time<=10){
       printf( "your total interest is %.3f",principal*rateOf_interest*time/100);
    }
    else{
        printf("there are some values that are out of range");
    }
    
*/



     int principal, rateOf_interest,time;
    printf("Inter the principal amount. it must be between 100 to 1,000,000");
    scanf("%d",&principal);
    printf("Inter the rate of interest. it must be between 5 to 10");
    scanf("%d",&rateOf_interest);
    printf("Time period between 1 to 10 years . it must be between 1 to 10");
    scanf("%d",&time);
    printf( "your total interest is %.3f",principal*rateOf_interest*time/100);
    
       return 0;
}