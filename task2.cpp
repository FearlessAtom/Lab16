#include <stdio.h>
int sum(int array[],int length){
    int sum = 0;
    for(int index = 0;index < length;index++){sum = sum + array[index];}
    return sum;}
int max(int array[],int length){
    int max = array[0];
    for(int index = 0;index < length;index++){if(array[index] > max){max = array[index];}}
    return max;}
int min(int array[],int length){
    int min = array[0];
    for(int index = 0;index < length;index++){if(array[index] < min){min = array[index];}}
    return min;}
int product(int array[],int length){
    int product = 1;
    for(int index = 0;index < length;index++){product = product * array[index];}
    return product;}
int main(){
    int array[] = {7, 5, 9, 1, 2, 6, 10, 8, 3, 4};
    int length = sizeof(array)/sizeof(array[0]);
    printf("Sum is equal to : %d\n",sum(array,length));
    printf("The maximum element of the array is : %d\n",max(array,length));
    printf("The minimum element of the array is : %d\n",min(array,length));
    printf("Product is equal to : %d",product(array,length));
    return 0;}