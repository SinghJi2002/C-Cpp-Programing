#include<stdio.h>
int DS(int x){
    if(x==0){
        return 0;
    }
    else if(x<10){
        return x;
    }
    else{
        int n=x%10;
        int y=x/10;
        return(n+DS(y));
    }
}
int main(){
    printf("Enter number\n");
    int n;
    scanf("%d",&n);
    int sum=0;
    int sumDigits=DS(n);
    printf("%d",sumDigits);
    return 0;
}