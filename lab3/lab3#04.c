#include<stdio.h>

int main(){
      int car_avg;
    printf("enter your car average");
    scanf("%d",&car_avg);

    int singleTrip_fuel= 1207/car_avg;
    int total_cost=singleTrip_fuel*241;
        printf("total cost for round trip %d \n",total_cost);

    int total_fuel=singleTrip_fuel*2;

    printf("total fuel utilized is %d \n",total_fuel);
    
       return 0;
}