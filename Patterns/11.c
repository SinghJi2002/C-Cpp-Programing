#include<stdio.h>
int main(){ 
    int n;
    printf("Enter the number of rows you want\n");
    scanf("%d",&n);
    int columnCount=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<columnCount;j++){
            if(i+j==3){
                printf("*");
            }
            else if(i==n-1){
                printf("*");
            }
            else if(j-i==3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}