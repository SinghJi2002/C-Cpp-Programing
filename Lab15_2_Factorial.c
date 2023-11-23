#include<stdio.h>
int factorial(int a){
    if(a==1){
        return 1;
    }
    else if(a==0){
        return 1;
    }
    else{
        return(a*factorial(a-1));
    }
}
int main(){
    printf("Enter number to find factorial\n");
    int num;
    scanf("%d",&num);
    int factor=factorial(num);
    printf("Factorial of %d is %d",num,factor);
}