#include<stdio.h>
int main(){
    char a;
    printf("Enter a character\n");
    scanf("%c",&a);
    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
        printf("Its a vowel");
    } 
    else{
        printf("Its a consonant");
    } 
    return 0;
}