#include<stdio.h>
void sum(int* arr){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("Sum is %d\n",sum);
}
int main(){
    int array[5]={1,2,3,4,5};    
    sum(array);
    return 0;
}