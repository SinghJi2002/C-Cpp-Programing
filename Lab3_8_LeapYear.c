#include<stdio.h>
int main(){
    int a;
    printf("Enter a specific year\n");
    scanf("%d",&a);
    if (a%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}