#include<stdio.h>
void sum(int* x,int c){
    int sum=0;
    for(int i=0;i<c;i++){
        sum=sum+x[i];
    }
    printf("Sum of element is %d\n",sum);
}
void sort(int* x,int c){
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            if(x[i]>x[j]){
            int temp;
            temp=x[j];
            x[j]=x[i];
            x[i]=temp;
            }
        }
    }
    printf("Sorted array is\n");
    for(int i=0;i<c;i++){
        printf("%d\t",x[i]);
    }
}
int main(){
    printf("Enter the number of element you want in the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter number of your choice\n");
        int element;
        scanf("%d",&element);
        arr[i]=element;
    }
    int* ptr=arr;
    sum(ptr,n);
    sort(ptr,n);
    return 0;
}