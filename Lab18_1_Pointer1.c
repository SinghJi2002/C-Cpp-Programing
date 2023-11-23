#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("The address of a is %p and value is %d\n",x,*x);
    return 0;
}