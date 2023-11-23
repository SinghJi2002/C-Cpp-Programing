#include<stdio.h>
void swap(int x,int y){
    int swapVariable;
    swapVariable=x;
    x=y;
    y=swapVariable;
    printf("Swapped Values are %d and %d",x,y);
}
int main(){
    int a,b;
    printf("Enter number of your choice\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}