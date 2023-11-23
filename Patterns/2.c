#include<stdio.h>
int main(){
    printf("Enter the number of row you want\n");
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=0;j<=n;j++){
            if(j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}