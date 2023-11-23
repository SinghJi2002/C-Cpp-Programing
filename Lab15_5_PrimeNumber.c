#include<stdio.h>
int prime(int x){
    int count=0;
    for(int i=1;i<x+1;i++){
        if(x%i==0){
            count=count+1;
        }
    }
    return(count);
}
void main(){
    int n;
    printf("End point\n");
    scanf("%d",&n);
    for(int j=1;j<n+1;j++){
        int num=prime(j);
        if(num>2){
            printf("Not prime");
        }
        else{
            printf("Prime\n");
        }
    }
}