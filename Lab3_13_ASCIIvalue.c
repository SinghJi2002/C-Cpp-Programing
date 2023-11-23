#include<stdio.h>
int main(){
    char a;
    printf("Enter character to find ASCII value\n");
    scanf("%c",&a);
    int b=(int)a;
    printf("ASCII value of %c is %d",a,b);
    return 0;
}