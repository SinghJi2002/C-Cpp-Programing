#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f %f %f",&a,&b,&c);
    float s=(a+b+c)/2;
    double area=sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("Area is %f",area);
    return 0;
}