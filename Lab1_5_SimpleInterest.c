#include<stdio.h>
int main(){
    float principle,time,rate;
    printf("Please enter principle rate and amount of your loan");
    scanf("%f",&principle);
    scanf("%f",&time);
    scanf("%f",&rate);
    float simpleInterest=(principle*time*rate)/100;
    printf("Simple interest is %f",simpleInterest); 
    return 0;
}