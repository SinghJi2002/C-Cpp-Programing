#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in the array\n");
    scanf("%d",&n);
    int arr[10];
    int element;
    for(int i=0;i<n;i++){
        printf("Enter element\n");
        scanf("%d",&element);
        arr[i]=element;
    }
    int* x=arr;
    //Display
    for(int j=0;j<n;j++){
        printf("%d\n",x[j]);
    }
    printf("\n");
    //Sum
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+x[i];
    }
    printf("Sum of elements is %d\n",sum);
    printf("\n");
    //Reverse Display
    for(int j=n-1;j>=0;j--){
        printf("%d\n",x[j]);
    }
    printf("\n");
    //Reverse in cyclic order
    int temp;
    temp=x[0];
    x[0]=x[n-1];
    for(int i=n-1;i>=0;i--){
        x[i]=x[i-1];
    }
    x[1]=temp;
    for(int j=0;j<n;j++){
        printf("%d\n",x[j]);
    }
    //Largest element
    printf("\n");
    int max=0;
    for(int i=0;i<n;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("Highest element is %d\n",max);
    return 0;
}