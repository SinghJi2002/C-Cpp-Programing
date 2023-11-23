#include<stdio.h>
int main(){
    //We are going to take float, int and char and print thier sizes
    int a=5;
    float b=5.5;
    char c=' ';
    int* x;
    float* y;
    char* z;
    x=&a;
    y=&b;
    z=&c;
    printf("The size of a,b and c are %u,%u and %u",sizeof(*x),sizeof(*y),sizeof(*z));
    return 0;
}