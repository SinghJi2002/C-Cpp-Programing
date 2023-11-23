#include<stdio.h>
int main(){
    int newArray[10];
    for(int i=0;i<10;i++){
        printf("Enter Element\n");
        scanf("%d",&newArray[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d ",newArray[i]);
    }
    printf("\n");
    int swapVariable;
    for(int j=0;j<10;j=j+2){
        swapVariable=newArray[j];
        newArray[j]=newArray[j+1];
        newArray[j+1]=swapVariable;
    }
    for(int i=0;i<10;i++){
        printf("%d ",newArray[i]);
    }
    return 0;
}