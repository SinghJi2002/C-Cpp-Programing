#include<stdio.h>
int main(){
    int myNumbers[10],posiSum=0,negeSum=0,posElement=0,negElement=0,number;
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++){
        printf("Enter Number\n");
        scanf("%d",&number);
        myNumbers[i]=number;
    }
    for(int j=0;j<10;j++){
        if(myNumbers[j]>=0){
            posiSum=posiSum+myNumbers[j];
            posElement=posElement+1;
        }
        else{
            negeSum=negeSum+myNumbers[j];
            negElement=negElement+1;
        }
    }
    printf("Sum Of Positive Integers is %d\n",posiSum);
    printf("Number of positive elements added %d\n",posElement);
    printf("Sum Of Negetive Integers is %d\n",negeSum);
    printf("Number of negetive elements added is %d\n",negElement);
    return 0;
}