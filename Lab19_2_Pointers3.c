#include<stdio.h>
void arrange(int* arr){
    int swap;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                swap=arr[j];
                arr[j]=arr[i];
                arr[i]=swap;
            }
        }
    }
    for(int k=0;k<5;k++){
        printf("%d\n",arr[k]);
    }
}
int main(){
    printf("Enter Elements of your choice\n");
    int array[5];
    for(int i=0;i<5;i++){
        int element;
        scanf("%d",&element);
        array[i]=element;
    }    
    arrange(array);
    return 0;
}