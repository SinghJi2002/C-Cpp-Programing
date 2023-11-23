#include<stdio.h>
int main(){
    printf("Enter length and breadth of rectangle");
    int length,breadth;
    scanf("%d",&length);
    scanf("%d",&breadth);
    int area=length*breadth;
    printf("Area of rectangle is %d",area);
    return 0;
}