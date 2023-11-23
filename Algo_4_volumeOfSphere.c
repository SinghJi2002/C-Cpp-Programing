#include<stdio.h>
int main(){
    float a;
    printf("Enter radius");
    scanf("%f",&a);
    float volume=(4*3.14*a*a*a)/3;
    printf("Volume is %f",volume);
    return 0;
}