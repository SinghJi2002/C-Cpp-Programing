#include<stdio.h>
int main(){
    float basicCost=250;
    float rate=1.25;
    float numberOfCalls;
    printf("Enter Number of calls\n");
    scanf("%f",&numberOfCalls);
    if(numberOfCalls<100){
        printf("Bill is %f\n",basicCost);
    }
    else{
        float extraRate=(numberOfCalls-100)*rate;
        printf("Bill is %f\n",extraRate+basicCost);
    }
    return 0;
}