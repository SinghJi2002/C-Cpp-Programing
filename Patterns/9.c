#include<stdio.h>
int main(){
    printf("Enter the number of row you want\n");
    int n;
    scanf("%d",&n);
    int columnCount=2*n-1;
    for(int i=0;i<n;i++){
        int spacecount=n-1-i;
        int starCount=2*i+1;
        int starsPrinted=0;
        for(int j=0;j<columnCount;j++){
            if(j<spacecount){
                printf(" ");
            }
            else if(starsPrinted<starCount){
                printf("*");
                starsPrinted=starsPrinted+1;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        int spacecount=n-i-1;
        int starCount=2*i+1;
        int starPrinted=0;
        for(int j=0;j<columnCount;j++){
            if(j<spacecount){
                printf(" ");
            }
            else if(starPrinted<starCount){
                printf("*");
                starPrinted=starPrinted+1;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}