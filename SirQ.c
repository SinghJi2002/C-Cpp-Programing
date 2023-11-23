#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first value");
    scanf("%d",&a);
    printf("Enter scan value");
    scanf("%d",&b);
    int sum=add1(&a,&b);
    printf("%d",sum);
}
int add1(int*x,int*y)
{
    int z=*x+*y;
    return z;
}