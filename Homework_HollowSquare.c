#include<stdio.h>
int main(){
    int column,row;
    printf("Enter Row and Column\n");
    scanf("%d %d",&column,&row);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==0 || i==row-1){
                printf("* ");
            }
            else if(j==0 || j==column-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");    
    }
}