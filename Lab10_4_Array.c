#include<stdio.h>
int main(){
    int newArray[10];
    for(int i=0;i<10;i++){
        printf("Enter Element\n");
        scanf("%d",&newArray[i]);
    }
    printf("Enter element whose frequency is to be found\n");
    int a;
    int count=0;
    scanf("%d",&a);
    for(int j=0;j<10;j++){
        if (newArray[j]==a){
            count=count+1;
            printf("Index of entered element is %d\n",j);
        }
    }
    if(count>0){
        printf("Element was found\n");
    }
    else{
        printf("Element was not found\n");
    }
    return 0;
}