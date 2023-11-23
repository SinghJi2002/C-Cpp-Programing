#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int d,e,f;
    a=a/10;
    d=a%10;
    b=b/10;
    e=b%10;
    c=c/10;
    f=c%10;
    int sumOfTenth=f+d+e;
    printf("The sum of 10th place of 3 numbers is %d",sumOfTenth);
    return 0;
}