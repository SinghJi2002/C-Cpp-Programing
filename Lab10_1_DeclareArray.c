#include<stdio.h>
int main(){
    int newArray[10];
    for(int i=0;i<10;i++){
        printf("Enter Marks\n");
        scanf("%d",&newArray[i]);
    }
    int sum=0;
    int lenght=0;
    for(int j=0;j<10;j++){
        sum=sum+newArray[j];
        lenght=lenght+1;
    }
    int average=sum/lenght;
    if(average>90 && average<100){
        printf("O");
    }
    else if(average>80 && average<90){
        printf("E");
    }
    else if(average>70 && average<80){
        printf("A");
    }
    else if(average>60 && average<70){
        printf("B");
    }
    else if(average>50 && average<60){
        printf("C");
    }
    else if(average>40 && average<50){
        printf("D");
    }
    else if(average>30 && average<40){
        printf("E");
    }
    else{
        printf("F");
    }
    return 0;
}
