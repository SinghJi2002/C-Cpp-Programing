#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter 4 numbers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a=b;
    printf("%d\n",a);
    a=c;
    printf("%d\n",a);
    a=d;
    printf("%d\n",a);
    b=a;
    printf("%d\n",b);
    b=c;
    printf("%d\n",b);
    b=d;
    printf("%d\n",b);
    c=a;
    printf("%d\n",c);
    c=b;
    printf("%d\n",c);
    c=d;
    printf("%d\n",c);
    d=a;
    printf("%d\n",d);
    d=b;
    printf("%d\n",d);
    d=c;
    printf("%d\n",d);
    return 0;
}