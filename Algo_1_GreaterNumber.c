#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b \n");
    scanf("%d",&a);
    scanf("%d",&b);
    int c=(a>b)?a:b;
    printf("Greater number is %d",c);
    return 0;
}