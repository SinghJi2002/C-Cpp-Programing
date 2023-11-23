#include<stdio.h>
int main(){
    int rowcount;
    printf("Enter Rowcount\n");
    scanf("%d",&rowcount);
    int columncount=2*rowcount-1;
    for(int i=0;i<rowcount;i++){
        int spacecount=columncount-rowcount-i;
        for(int j=0;j<columncount;j++){
            if(i==0){
                if(j<spacecount){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            else if(i==rowcount-1){
                if(j<rowcount){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else if(j==rowcount-1-i){
                printf("*");
            }
            else if(j==columncount-i-1){
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