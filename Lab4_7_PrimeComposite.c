#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter Number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+1;
        }
    }
    if(sum==2 || sum<2){
        printf("Prime Number");
    }
    else{
        printf("Composite Number");
    }
    return 0;
}