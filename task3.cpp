#include <stdio.h>
int reversed(int number){
    int reverse = 0;
    while(number){
        reverse = reverse * 10 + number % 10;
        number = number / 10;}
    return reverse;}
int main(){
    printf("Enter a number : ");int number;scanf("%d",&number);
    printf("Reversed : %d",reversed(number));
    return 0;}