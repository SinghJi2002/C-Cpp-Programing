#include<stdio.h>
void fibonacci(int n){
    int a=0;
    int b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    int count=2;
    while(count<=n){
        int c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        count=count+1;
    }
}
int main(){
    int n;
    printf("Enter Limit\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}