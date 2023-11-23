#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the base number and its power\n");
    scanf("%d %d",&a,&b);
    int c=a;
    for(int i=2;i<=b;i++){
        a=a*c;
    }
    printf("Your solution is %d",a);
    return 0;
}