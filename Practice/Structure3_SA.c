#include<stdio.h>
int main(){
    struct complex{
        float real;
        float complex;
    };
    struct complex num1={2.6,10};
    struct complex num2={2,15};
    //Sum
    printf("The sum of two number is %f+i%f",num1.real+num2.real,num1.complex+num2.complex);
    return 0;
}