#include<stdio.h>
int main(){
    int a;
    int* x=&a;
    *x=5;
    printf("Value of A is %d\n",a);
    return 0;
}