#include<stdio.h>
int sum(int* x,int* y){
    int add=*x+*y;
    return(add);
}
int main(){
    int a=5;
    int b=6;
    int* x=&a;
    int* y=&b;
    int c=sum(x,y);
    printf("Sum %d\n",c);
    return 0;
}