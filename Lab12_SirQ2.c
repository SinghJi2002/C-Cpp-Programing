#include<stdio.h>
int main(){
    //User Input
    int newArray[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter Elements\n");
            int element;
            scanf("%d",&element);
            newArray[i][j]=element;
        }
    }
    //Display
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",newArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Diagonal Elements;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                printf("%d\t",newArray[i][j]);
            }
        }
        printf("\n");
    }
    //Searching Elements
    printf("Enter Element You Want To Discover\n");
    int el;
    scanf("%d",&el);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(el==newArray[i][j]){
                printf("The elements is found at %d row and %d column\n",i+1,j+1);
            }
        }
    }
    //Maximum
    int max=100;
    int min=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(newArray[i][j]>min){
                min=newArray[i][j];
            }
        }
    }
    printf("Maximum Element is %d\n",min);
    //Minimum
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(newArray[i][j]<max){
                max=newArray[i][j];
            }
        }
    }
    printf("Minimum Element is %d\n",max);
    //Sum Of Row Elements
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+newArray[i][j];        
        }
        printf("Sum Of Elements Of row %d is %d\n",i+1,sum);
        sum=0;
    }
    //Transpose
    int transposeArray[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transposeArray[i][j]=newArray[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",transposeArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Sort
    int swapVariable;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(newArray[i][j]>newArray[i][j+1]){
                swapVariable=newArray[i][j+1];
                newArray[i][j+1]=newArray[i][j];
                newArray[i][j]=swapVariable;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",newArray[i][j]);
        }
        printf("\n");
    }
}

