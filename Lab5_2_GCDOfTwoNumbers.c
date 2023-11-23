#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two Numbers\n");
    scanf("%d %d",&a,&b);
    int greatest=0;
    int i=1;
    if(a>b){
        for(i;i<=a;i++){
            if(a%i==0 && b%i==0){
                greatest=i;
            }
        }
    }
    else{
        for(i;i<=b;i++){
            if(a%i==0 && b%i==0){
                greatest=i;
            }
        }
    }
    printf("The greatest comman factor is %d for %d and %d\n",greatest,a,b);
    return 0;
}