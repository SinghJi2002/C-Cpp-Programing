#include<stdio.h>
int Sum(int* p,int q,int r,int s){
    if(r==q){
        return(s);
    }
    else{
        s=s+p[r];
        r=r+1;
        return(Sum(p,q,r,s));
    }
}
int main(){
    int n;
    printf("Enter number of elements you want\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int element;
        printf("Enter element\n");
        scanf("%d",&element);
        arr[i]=element;
    }
    int* ptr=arr;
    int sum=0;
    int count=0;
    int sumArray=Sum(ptr,n,count,sum);    
    printf("The sum of element is %d\n",sumArray);
    return 0;
}