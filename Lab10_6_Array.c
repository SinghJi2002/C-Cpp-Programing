#include<stdio.h>
int main(){
    int newArray[10];
    for(int i=0;i<10;i++){
        printf("Enter Element\n");
        scanf("%d",&newArray[i]);
    }
    int count=0;
    for(int j=0;j<10;j++){
        for(int k=0;k<10;k++){
            if(newArray[j]==newArray[k]){
                count=count+1;
            }
        printf("Frequency of %d is %d\n",newArray[j],count);
        count=0;
        }
    }
    return 0;
}