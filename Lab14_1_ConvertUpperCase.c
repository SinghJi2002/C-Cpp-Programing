#include<stdio.h>
int main(){
    char string[10]="ashutosh";
    char string2[10];
    int i=0;
    while(string[i]!='\0'){
        string2[i]=string[i]-32;
        i=i+1;
    }
    while(string2[i]!='\0'){
        printf("%c",string2[i]);
        i=i+1;
    }   
}