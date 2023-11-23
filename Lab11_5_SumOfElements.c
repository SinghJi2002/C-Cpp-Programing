#include<stdio.h>
int main(){
    int a,sum;
    printf("Enter Number of elements you want to have in the list\n");
    scanf("%d",&a);
    int newArray[a];
    for(int k=0;k<a;k++){
        printf("Enter Number\n");
        scanf("%d",&newArray[k]);
    }
    for(int i=0;i<a;i++){
        sum=sum+newArray[i];
    }
    printf("Sum of elements is %d\n",sum);
}