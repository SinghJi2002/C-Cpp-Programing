#include<stdio.h>
int main(){
    int a,swapVariable,count=0;
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
    int condition=0;
    int i=a-1;
    while(condition==0){
        if(newArray[i]!=newArray[i-1]){
            printf("Second largest element is %d\n",newArray[i-1]);
            condition=1;
        }
        else{
            i=i-1;
        }
    }
}