#include<stdio.h>
int main(){
    int a,n;
    printf("Enter 3 digit number\n");
    scanf("%d",&a);
    for(int i=0;i<3;i++){
        n=a%10;
        printf("%d\n",n);
        a=a/10;
    } 
    return 0;
}