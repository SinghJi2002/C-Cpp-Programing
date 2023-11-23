#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter Number");
    int a;
    scanf("%d",&a);
    double b=pow(a,2);
    printf("Square of %d is %f",a,b);
    return 0;
}