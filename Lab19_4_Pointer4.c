#include<stdio.h>
#include<math.h>
void exponents(int* x,int* y){
    int power=pow(*x,*y);
    printf("Solution is %d\n",power);
}
int main(){
    printf("Enter Number of your choice\n");
    int a,b;
    scanf("%d%d",&a,&b);
    exponents(&a,&b);
    return 0;
}