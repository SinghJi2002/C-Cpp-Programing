#include<stdio.h>
int main(){
    int n,m,product=1;
    printf("Enter starting integer\n");
    scanf("%d",&n);
    printf("Enter ending integer\n");
    scanf("%d",&m);
    do{
        for(int i=n;i>0;i--){
            product=product*i;
        }
        printf("Factorial of %d is %d\n",n,product);
        n=n+1;
        product=1;
    }while(n<=m);
    return 0;
}