#include<stdio.h>
int main(){
    struct items{
        int pizza;
        int pepsi;
        int packing;
    };
    struct items cost={100,30,50};
    printf("What is the total number of guest?\n");
    int n;
    scanf("%d",&n);
    printf("Total cost per person is %d\n",(cost.pizza*n+cost.pepsi*n+cost.packing*n)/n);
    return 0;
}