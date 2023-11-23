#include<stdio.h>
int main(){
    int a=5;
    int* x;
    x=&a;
    printf("The address of variable a is %p",x);
    return 0;
}