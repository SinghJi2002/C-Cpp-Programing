#include<stdio.h>
int main(){
    int a,swapVariable;
    printf("Enter Number of elements you want to have in the list\n");
    scanf("%d",&a);
    int newArray[a];
    for(int k=0;k<a;k++){
        printf("Enter Number\n");
        scanf("%d",&newArray[k]);
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(newArray[i]>newArray[j]){
                swapVariable=newArray[j];
                newArray[j]=newArray[i];
                newArray[i]=swapVariable;
            }
        }
    }
    for(int j=0;j<a;j++){
        printf("%d\t",newArray[j]);
    }
    return 0;
}