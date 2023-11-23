#include<stdio.h>
int main(){
    int n;
    printf("Enter row count\n");
    scanf("%d",&n);
    int columnCount=n+2;
    for(int i=0;i<n;i++){
        int starLimit=4;
        int starCount=0;
        for(int j=0;j<=columnCount;j++){
            if(j<i){
                printf(" ");
            }
            else if(starCount<starLimit){
                printf("*");
                starCount=starCount+1;
            }
            
        }
        printf("\n");
    }
    return 0;
}