#include<stdio.h>
void greater(int* x,int* y){
    if(*x>*y){
        printf("First number is greater\n");
    }
    else{
        printf("Second number is greater\n");
    }
}
int main(){
    printf("Enter Number of your choice\n");
    int a,b;
    scanf("%d%d",&a,&b);
    greater(&a,&b);
    return 0;
}