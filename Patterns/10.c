#include<stdio.h>
int main(){
    printf("Enter the number of row you want\n");
    int n;
    scanf("%d",&n);
    int columnCount=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<columnCount;j++){
            if(i==0 || i==n-1){
                printf("*");
            }
            else if(j==0 || j==n-1){
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