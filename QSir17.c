#include<stdio.h>
int main(){
    int a;
    printf("Enter number of your choice\n");
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            sum=sum+1;
        }
    }
    if(sum==2){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}