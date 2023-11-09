#include <stdio.h>
double areaoftrapezoid(int a, int b,int height){return 0.5 * (a + b) * height;}
int main(){
    printf("What is the value of a? : ");int a;scanf("%d",&a);
    printf("What is the value of b? : ");int b;scanf("%d",&b);
    printf("What is the value of the height? : ");int height;scanf("%d",&height);
    printf("The area of the trapezoid is : %.2lf",areaoftrapezoid(a,b,height));
    return 0;}