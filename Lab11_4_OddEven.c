#include<stdio.h>
int main(){
    int a,countOdd=0,countEven=0,sumOdd=0,sumEven=0;
    printf("Enter Number of elements you want to have in the list\n");
    scanf("%d",&a);
    int newArray[a];
    for(int k=0;k<a;k++){
        printf("Enter Number\n");
        scanf("%d",&newArray[k]);
    }
    for(int i=0;i<a;i++){
        if(newArray[i]%2==0){
            countEven=countEven+1;
            sumEven=sumEven+newArray[i];
        }
        else{
            countOdd=countOdd+1;
            sumOdd=sumOdd+newArray[i];
        }
    }
    printf("Total Even Elements are %d\n",countEven);
    printf("Total Odd Elements are %d\n",countOdd);
    printf("Sum of Even Elements is %d\n",sumEven);
    printf("Sum of Odd Elements is %d\n",sumOdd);
}