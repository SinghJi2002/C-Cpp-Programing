#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Number");
    scanf("%d %d",&a,&b);
    int c=13;
    int d=45;
    printf("%d %d %d %d",a&b,a&c,b|c,b|d);
    return 0;
}