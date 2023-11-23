#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers you want to multiply\n");
    scanf("%d %d",&a,&b);
    int sum=0;
    for(int i=0;i<b;i++){
        sum=sum+a;
    }
    printf("The multiplication of %d and %d is %d",a,b,sum); 
    return 0;
}