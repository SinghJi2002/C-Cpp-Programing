#include<stdio.h>
int main(){
    int a,b,sum=0,n=1;
    printf("Enter Number limits\n");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        while(n<=i){
            if(i%n==0){
                sum=sum+1;
                n=n+1;
            }
            else{
                n=n+1;
            }
        }
        if(sum==2 || sum<2){
            printf("%d is Prime Number\n",i);
        }
        n=1;
        sum=0;
    }
    return 0;
}