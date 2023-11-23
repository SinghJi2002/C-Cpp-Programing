#include<stdio.h>
#include<string.h>
int main(){
    char octal[100]="";
    char hexadecimal[100]="";
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    //For octal
    int index=0;
    while(a>0){
        int b=a%8;
        octal[index]=b;
        a=a/8;
        index=index+1;
    }
    index=0;
    //For Hexadecimal
    while(a>0){
        int b=a%16;
        if (b==10){
            hexadecimal[index]='A';
            a=a/16;
            index=index+1;
        }
        else if (b==11){
            hexadecimal[index]='B';
            a=a/16;
            index=index+1;
        }
        else if (b==12){
            hexadecimal[index]='C';
            a=a/16;
            index=index+1;
        }
        else if (b==13){
            hexadecimal[index]='D';
            a=a/16;
            index=index+1;
        }
        else if (b==14){
            hexadecimal[index]='E';
            a=a/16;
            index=index+1;
        }
        else if (b==15){
            hexadecimal[index]='F';
            a=a/16;
            index=index+1;
        }
        else{
            hexadecimal[index]=b;
            index=index+1;
            a=a/16;
        }
    }
    int lenght_of_octal=strlen(octal);
    int lenght_of_hexadecimal=strlen(hexadecimal);
    for(int i=lenght_of_hexadecimal;i>-1;i--){
        printf("%c",hexadecimal[i]);
    }
    for(int i=lenght_of_octal;i>-1;i--){
        printf("%c",octal[i]);
    }    
    return 0;
}