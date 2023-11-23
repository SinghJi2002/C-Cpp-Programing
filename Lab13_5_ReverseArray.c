#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter the string you wanna make\n");
    char swapVariable;
    scanf("%s",&arr);
    int size=sizeof(arr);
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]!='\0'){
            count=count+1;
        }
        else{
            break;
        }
    }
    for(int i=0;i<(count/2);i++){
        swapVariable=arr[i];
        arr[i]=arr[count-1-i];
        arr[count-1-i]=swapVariable;
    }
    printf("%s",arr);
}