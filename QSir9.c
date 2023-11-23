#include<stdio.h>
int main(){
    int a=0,b=1;
    a=b;
    b=b+1;
    printf("%d\n",a);
    printf("%d\n",b);
    a=++b;
    b=b+1;
    a=b;
    printf("%d\n",a);
    printf("%d\n",b);
    
    
    return 0;
}
/*Precedence of increment and decrement operators in C*/