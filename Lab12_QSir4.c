#include<stdio.h>
int main(){
    //User Input
    int newArray[3][3];
    int copyArray[3][3];
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
    //Creating One-Dimensional Array
    int k=0;
    int newarray[100];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            newarray[k]=newArray[i][j];
            k=k+1;
        }
    }
    //Display
    for(int i=0;i<9;i++){
        printf("%d\t",newarray[i]);
    }
    printf("/d");
    //Sort
    int swapVariable;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(newarray[i]>newarray[j]){
                swapVariable=newarray[j];
                newarray[j]=newarray[i];
                newarray[i]=swapVariable;
            }
        }
    }
    //Display
    for(int j=0;j<9;j++){
        printf("%d\t",newArray[j]);
    }
    printf("/d");
    //New Array
    k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            copyArray[i][j]=newarray[k];
            k=k+1;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",copyArray[i][j]);
        }
        printf("\n");
    }
}