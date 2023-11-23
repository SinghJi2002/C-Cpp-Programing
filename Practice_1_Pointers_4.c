#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=5;
    int b=6;
    swap(&a,&b);
    printf("Orignal values of a and b were 5 and 6. New values are %d and %d\n",a,b);
    return 0;
}