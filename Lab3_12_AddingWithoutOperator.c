#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers you wanna add\n");
    scanf("%d %d",&a,&b);
    int c=a;
    for(int i=0;i<b;i++){
        a=a+1;
    }
    printf("Sum of %d anf %d is %d",c,b,a);
    return 0;
}