#include<stdio.h>
#include<math.h>
void palindrome(int x){
    int y=x;
    int num=0;
    int a=0;
    while(x>0){
        int n=x%10;
        num=num+(int)(n*pow(10,a));
        a=a+1;
        x=x/10;
    }
    if(num==y){
        printf("Palindrome Number\n");
    }
    else{
        printf("Not a palindrome number\n");
    }
}
void main(){
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    palindrome(n);
}