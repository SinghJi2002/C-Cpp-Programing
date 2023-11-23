#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter the string you wanna make\n");
    int count=0;
    scanf("%s",&arr);
    int size=sizeof(arr);
    for(int i=0;i<size;i++){
        if(arr[i]!='\0'){
            count=count+1;
        }
        else{
            break;
        }
    }
    printf("Size Of String %d\n",count);
    return 0;
}