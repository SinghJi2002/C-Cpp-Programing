#include<stdio.h>
void main()
{
    int x,yn,a=10,b=20,c=30,d=40;
    double s=0;
    printf("Do you want to Input data?\n1.Yes\n2.NO\n(Input 1 or 2)\n");
    scanf("%d",&yn);
    if(yn==1)
    {
        printf("Input 4 numbers\n");
        scanf("%d %d %d %d",&a,&b,&c,&d);
    }
    printf("Select operation to perform:-\n");
    printf("1. (a+b)-(a*b+c)/d*a-b\n");
    printf("2. (d-a+b)/d/c+a*c\n");
    printf("3. a+d %% b-c*a\n");
    printf("4. c %% a+d-(c*a)/a*b\n");
    printf("5. (a+b)-(a+b*c)+(a+c %% d)+(c %% a)\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    s=(a+b)-(a*b+c)/d*a-b;
    break;
    case 2:
    s=(d-a+b)/d/c+a*c;
    break;
    case 3:
    s=a+d%b-c*a;
    break;
    case 4:
    s=c%a+d-(c*a)/a*b;
    break;
    case 5:
    s=(a+b)-(a+b*c)+(a+c%d)+(c%a);
    break;
    }
    printf("The Sum is %lf",s);
}
