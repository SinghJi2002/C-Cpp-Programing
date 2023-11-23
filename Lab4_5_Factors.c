#include<stdio.h>
int main(){
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(n%i==0){
            printf("%d is factor of %d\n",i,n);
            i=i+1;
        }
        else{
            i=i+1;
        }
    }
    return 0;
}