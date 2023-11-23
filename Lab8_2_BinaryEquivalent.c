#include<stdio.h>
#include<math.h>
int main(){
    int n,a,sum=0,b=0;
    printf("Enter Number\n");
    scanf("%d",&n);
    int num=n;
    do{
        a=n%2;
        n=n/2;
        sum=sum+(int)(a*pow(10,b));
        b=b+1;
    }while(n>0);
    sum=sum+(int)(n*pow(10,b));
    printf("Binary equivalent of %d is %d",num,sum);
    return 0;
}