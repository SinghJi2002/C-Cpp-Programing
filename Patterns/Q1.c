#include<stdio.h>
int main(){
    char str1[10]="Ashutosh",str2[10]="Divyansh";
    int condition=1;
    for (int k = 0; k < 10; k++)
    {
        if(str1[k]==str2[k]){
            condition=1;
        }
        else{
            condition=0;
            break;
        }
    }
    if(condition==1){
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
   return 0;
}