#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter Number\n");
    scanf("%d",&n);
    int i=1;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
            i=i+1;
        }
        else{
            i=i+1;
        }
    }
    if(sum==n){
        printf("Perfect Number\n");
    }
    else{
        printf("Not a perfect number\n");
    }
    return 0;
}