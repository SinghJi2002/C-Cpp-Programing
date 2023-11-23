#include<stdio.h>
void OddEven(int a){
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    printf("Enter Number\n");
    int num;
    scanf("%d",&num);
    OddEven(num);
}