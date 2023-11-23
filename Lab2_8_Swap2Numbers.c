#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b \n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a and b is %d and %d \n",a,b);
    return 0;
}