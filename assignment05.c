#include<stdio.h>
int main(){
    int N2darray[3][3];
    int element;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter element\n");
            scanf("%d",&element);
            N2darray[i][j]=element;
        }
    }
    int count=0;
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            if(N2darray[a][b]==0){
                count=count+1;
            }
            else{
                continue;
            }
        }
    }
    int totalElement=3*3;
    if(count>(totalElement)/2){
        printf("Sparse Array");
    }
    else{
        printf("Not a sparse array");
    }
    return 0;
}