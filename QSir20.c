#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b=2,sum=0;
    printf("Enter Number to check palindrome\n");
    scanf("%d",&n);
    int num=n;
    while(n>0){
        a=n%10;
        sum=sum+(int)(a*pow(10,b));
        n=n/10;
        b=b-1;
    }
    if(sum==num){
        printf("Palindrome Number\n");
    }
    else{
        printf("Not a palindrome\n");
    }
    return 0;
}