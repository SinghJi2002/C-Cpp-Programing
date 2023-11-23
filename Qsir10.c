#include<stdio.h>
int main(){
    int a=5,b=10,c=2,d=0;
    
    d=a++ + --b + ++c;
    
    printf("\n%d\n%d\n%d\n%d\n", a,b,c,d);
    return 0;
}