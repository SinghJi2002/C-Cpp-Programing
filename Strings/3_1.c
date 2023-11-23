#include<stdio.h>
int factorial(int x){
    if(x==0){
        return 1;
    }
    else if(x==1){
        return 1;
    }
    else{
        return(x*factorial(x-1));
    }
}
int main(){
    printf("Enter the number whose factorial you want\n");
    int n;
    scanf("%d",&n);
    int facto=factorial(n);
    printf("Factorial is %d\n",facto);    
    return 0;
}