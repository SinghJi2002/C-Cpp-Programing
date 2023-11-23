#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int b;
    int sum=0;
    printf("Enter number \n");
    scanf("%d",&a);
    b=a%10;
    sum=sum+b;
    a=a/10;
    b=a%10;
    sum=sum+b;
    a=a/10;
    b=a%10;
    sum=sum+b;
    printf("Sum is %d",sum);
    return 0;
}