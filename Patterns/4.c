#include<stdio.h>
int main(){
    printf("Enter number of row\n");
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}