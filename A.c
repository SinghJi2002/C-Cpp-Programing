#include<stdio.h>
void add(int x,int y){
    printf("%d\n",x+y);
}
int add1(int x,int y){
    return(x+y);
}
void add2(){
    int x=5;
    int y=6;
    printf("%d\n",x+y);
}
int add3(){
    int x=6;int y=5;
    return(x+y);
}

int main(){
    int a=5;
    int b=6;
    add(a,b);
    add2();
    int c=add1(a,b);
    int d=add3();
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}