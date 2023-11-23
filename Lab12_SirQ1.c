#include<stdio.h>
int main(){
    int newArray[3][3]={{1,2,3},{11,22,33},{12,13,14}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",newArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
