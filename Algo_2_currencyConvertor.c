#include<stdio.h>
int main(){
    int a;
    printf("Enter currency in dollar");
    scanf("%d",&a);
    int exchange=80;
    printf("The dollar in rupee is %d",a*exchange);
    return 0;
}