#include<stdio.h>
int main(){
    int n,b,a,sum=0;
    printf("Enter Number\n");
    scanf("%d",&n);
    int num=n;
    for(int i=n;i!=0;i=i/10)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum of digits is %d\n",sum);
    return 0;
}