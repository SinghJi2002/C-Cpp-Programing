#include<stdio.h>
#include<math.h>
int main(){
    int n,a,newNum=0,b=2;
    printf("Enter Number To Check Palindrome\n");
    scanf("%d",&n);
    int num=n;
    while(n>0){
        a=n%10;
        newNum=newNum+((int)(a*pow(10,b)));
        b=b-1;
        n=n/10;
    }
    if(num==newNum){
        printf("Palindrome Number");
    }
    else{
        printf("Not a palindrome number");
    }
    return 0;
}