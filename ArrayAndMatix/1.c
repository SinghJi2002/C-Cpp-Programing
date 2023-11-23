#include<stdio.h>
int main(){
    int arr[5];
    int element;
    for(int i=0;i<5;i++){
        printf("Enter element\n");
        scanf("%d",&element);
        arr[i]=element;
    }
    //Display
    for(int j=0;j<5;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    //Sum
    int sum=0;
    for(int k=0;k<5;k++){
        sum=sum+arr[k];
    }
    printf("Sum is %d\n",sum);
    //Largest Elements
    int max=0;
    for(int l=0;l<5;l++){
        if(arr[l]>max){
            max=arr[l];
        }
    }
    printf("Maximum number is %d\n",max);
    //Ascending Numbers
    for(int m=0;m<4;m++){
        if(arr[m]>arr[m+1]){
            int temp;
            temp=arr[m];
            arr[m]=arr[m+1];
            arr[m+1]=temp;
        }
    }
    for(int j=0;j<5;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    //Even and odd 
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("%d is a even number\n",arr[i]);
        }
        else{
            printf("%d is a odd number\n",arr[i]);
        }
    }
    printf("\n");
    //Even Max
    int maxEven=0;
    for(int i=0;i<5;i++){
        if(arr[i]>maxEven & arr[i]%2==0){
            maxEven=arr[i];
        }
    }
    printf("Max even element is %d\n",maxEven);
    printf("\n");
    //Swap 2 at a time
    for(int i=0;i<5;i=i+2){
        int temp;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int j=0;j<5;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    //First odd then even
    int newArray[5];
    int index=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2!=0){
            newArray[index]=arr[i];
            index=index+1;
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            newArray[index]=arr[i];
            index=index+1;
        }
    }
    for(int j=0;j<5;j++){
        printf("%d\t",newArray[j]);
    }
    printf("\n");
    //Reverse Order Display
    for(int i=4;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //1st with last type of swap
    for(int i=0;i<5;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[5-1-i];
        arr[5-1-i]=temp;
    }
    for(int j=0;j<5;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    //Second Largest element and median and deviation
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    for(int j=4;j>0;j--){
        if(arr[j]!=arr[j-1]){
            printf("Second Largest element is %d\n",arr[j-1]);
            break;
        }
        else{
            continue;
        }
    }
    printf("The median of the array is %d\n",arr[2]);
    for(int i=0;i<5;i++){
        printf("The standard the deviations are %d\n",arr[2]-arr[i]);
    }
    
    return 0;
}
