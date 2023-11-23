#include<stdio.h>
#include<math.h>
int main(){
    int n,b,a,sum=0;
    printf("Enter Number\n");
    scanf("%d",&n);
    int num=n;
    for (int i=n;i!=0;i=i/10)
    {
        a=n%10;
        sum=sum+((int)(pow(a,3)));
        n=n/10;
    }
    if(sum==num){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    
    return 0;
}