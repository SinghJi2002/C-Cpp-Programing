#include<stdio.h>
int main(){
    int arr1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int element;
            printf("Enter element\n");
            scanf("%d",&element);
            arr1[i][j]=element;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int element;
            printf("Enter element\n");
            scanf("%d",&element);
            arr2[i][j]=element;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Addition
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Multiply
    int multi[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            multi[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Diagonal Sum
    int sumDia=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sumDia=sumDia+arr1[i][j]+arr2[i][j];
            }
        }
    }
    printf("Diagonal Element sum is %d\n",sumDia);
    //Sum of elements of a matrix
    int sumEle=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sumEle=sumEle+arr1[i][j];
        }
    }
    printf("The sum of elements of arr1 is %d\n",sumEle);
    //Transpose Of A Matrix arr 2
    int transpose[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[i][j]=arr2[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Symmetric Matrix;
    int condition=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(transpose[i][j]==arr2[i][j]){
                condition=1;
            }
            else{
                condition=0;
                break;
            }
        }
    }
    if(condition==1){
        printf("Symmetric Matrix\n");
    }
    else{
        printf("Not a symmetric matrix");
    }
    printf("\n");
    return 0;
}