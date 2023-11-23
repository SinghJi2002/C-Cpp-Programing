#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter the string you wanna make\n");
    scanf("%s",&arr);
    char str[100];
    int size=sizeof(arr);
    for(int i=0;i<size;i++){
        str[i]=arr[i];
    }
    printf("%s",str);
    return 0;
}