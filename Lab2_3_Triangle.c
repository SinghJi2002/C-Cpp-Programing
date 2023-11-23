#include<stdio.h>
int main(){
    float a,b;
    printf("Enter height\n");
    scanf("%f",&a);
    printf("Enter base\n");
    scanf("%f",&b);
    float area=0.5*a*b;
    printf("Area of triangle is %f\n",area);
    return 0;
}