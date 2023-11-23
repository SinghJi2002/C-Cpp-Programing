#include<stdio.h>
int main(){
    int a,b,n,GCD,LCM;
    printf("Enter two Numbers\n");
    scanf("%d %d",&a,&b);
    //For GCD
    if(a>b){
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                GCD=i;
            }
        }
    }
    else{
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                GCD=i;
            }
        }
    }
    printf("The greatest comman factor is %d for %d and %d\n",GCD,a,b);
    //For LCM
    if(a>b){
        n=a;
        while(n>=a){
            if((n%a==0)&&(n%b==0)){
                LCM=n;
                break;
            }
            else{
                n=n+1;
            }
        }
    }
    else{
        n=b;
        while(n>=b){
            if((n%a==0)&&(n%b==0)){
                LCM=n;
                break;
            }
            else{
                n=n+1;
            }
        }
    }
    printf("The LCM of %d and %d is %d\n",a,b,LCM);
    return 0;
}