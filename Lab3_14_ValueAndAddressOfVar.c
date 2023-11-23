#include<stdio.h>
int main(){
    int a=5;
    printf("Value of variable \'a\' is %d\n",a);
    //This is how we find address of variable.
    printf("Address of variable \'a\' is %p\n",&a);
    return 0;
}