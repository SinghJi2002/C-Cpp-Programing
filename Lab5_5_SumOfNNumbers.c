#include<stdio.h>
int main(){
    int n;
    printf("Enter limit\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n+1;i++){
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    return 0;
}