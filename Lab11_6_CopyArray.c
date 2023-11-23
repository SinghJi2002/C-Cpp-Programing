#include<stdio.h>
int main(){
    int a;
    printf("Enter Number of elements you want to have in the list\n");
    scanf("%d",&a);
    int newArray[a];
    for(int k=0;k<a;k++){
        printf("Enter Number\n");
        scanf("%d",&newArray[k]);
    }
    int copyArray[a];
    for(int i=0;i<a;i++){
        copyArray[i]=newArray[i];
    }
    for(int j=0;j<a;j++){
        printf("%d ",copyArray[j]);
    }
}