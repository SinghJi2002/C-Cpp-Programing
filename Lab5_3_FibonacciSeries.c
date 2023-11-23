#include<stdio.h>
int main(){
    int n;
    printf("Enter end limit of fibonacci series\n");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    int r=2;
    while(r<=n){
        int c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        r=r+1;
    }
    return 0;
}