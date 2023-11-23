#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("Sum of numbers is %f\n",a+b+c);
    printf("Average of 3 numbers is %f\n",(a+b+c)/3);
    if(a>b && a>c){
        printf("%f is the greatest\n",a);
    }
    else if(b>c && b>a){
        printf("%f is the greatest\n",b);
    }
    else{
        printf("%f is the greatest\n",c);
    }
    if(a<c && a<b){
        printf("%f is the smallest\n",a);
    }
    else if(b<c && b<a){
        printf("%f is the smallest\n",b);
    }
    else{
        printf("%f is the smallest\n",c);
    }
    return 0;
}