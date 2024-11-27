#include<stdio.h>
int main (){
    int arr[] = {1,2,34,5,5};
    printf("the sum of the array is: %d", sumarray(arr, 5));
    return 0;
}
int sumarray(int arr[], int sum){
    int count = 0;
    for (int i = 0; i < sum - 1; i++)
    {
        sum+= arr[i];
    }
    return 0;
}