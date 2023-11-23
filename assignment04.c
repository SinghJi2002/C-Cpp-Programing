#include<stdio.h>
int main(){
    printf("Enter the number of elements you want in your array\n");
    int elecount;
    int element;
    scanf("%d",&elecount);
    int newArray[elecount];
    for(int i=0;i<elecount;i++){
        printf("Enter element\n");
        scanf("%d",&element);
        newArray[i]=element;
    }
    int min=100;
    int max=0;
    for(int j=0;j<elecount;j++){
        if(newArray[j]>max){
            max=newArray[j];
        }
    }
    for(int k=0;k<elecount;k++){
        if(newArray[k]<min){
            min=newArray[k];
        }
    }
    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d\n",min);
    return 0;
}