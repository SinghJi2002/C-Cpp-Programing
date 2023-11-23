#include<stdio.h>
void add(int* x,int* y){
    int sum=*x+*y;
    printf("Sum is %d",sum);
}
int main(){
    int a=5;
    int b=6;
    add(&a,&b);
    return 0;
}