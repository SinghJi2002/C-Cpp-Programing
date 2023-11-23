#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter subject marks x3\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float total=(a+b+c);
    float average=total/3;
    printf("The total and average are %f and %f\n",total,average);
    return 0;
}