#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int b;
    printf("Enter number \n");
    scanf("%d",&a);
    b=a%10;
    printf("%d\n",b*b);
    a=a/10;
    b=a%10;
    printf("%d\n",b*b);
    a=a/10;
    b=a%10;
    printf("%d\n",b*b);
    return 0;
}