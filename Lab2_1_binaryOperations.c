#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers to perform binary operations");
    scanf("%d",&a);
    scanf("%d",&b);
    int sum=a+b;
    int difference=a-b;
    int multiply=a*b;
    int division=a/b;
    int remainder=a%b;
    printf("Sum is %d \n Multiplication is %d \n Difference is %d \n Division is %d \n remainder is %d",sum,difference,multiply,division,remainder);
    return 0;
}