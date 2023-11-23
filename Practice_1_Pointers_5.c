#include<stdio.h>
int main(){
    char* x;
    char str[10]="Ashutosh";
    x=str;// Important to note that whenever we are assigning compound dtypes such as string and arrays
          //to a pointer we do it without the address operator.
    int i=0;
    //Printing Elements of string
    while(x[i]!='\0'){
        printf("%c",x[i]);
        i=i+1;
    }
    //Checking for vowels and consonants
    int j=0;
    int vowel=0;
    int consonant=0;
    while(x[j]!='\0'){
        if(x[j]=='a' || x[j]=='e' || x[j]=='e' || x[j]=='i' || x[j]=='o' || x[j]=='u' || x[j]=='A' || x[j]=='E' || x[j]=='I' || x[j]=='O' || x[j]=='U'){
            vowel=vowel+1;
            j=j+1;
        }
        else{
            consonant=consonant+1;
            j=j+1;
        }
    }
    printf("\nThe number of vowel and consonants are %d and %d",vowel,consonant);
    printf("\n");
    //Distinct Cosonants and vowels
    int a=0;
    int e=0;
    int I=0;
    int o=0;
    int u=0;
    int arr1[5]={a,e,I,o,u};
    int count=0;
    while(x[count]!='\0'){
        if(x[count]=='a' || x[count]=='A'){
            a=1;
            count=count+1;
        }
        else if(x[count]=='e' || x[count]=='E'){
            e=1;
            count=count+1;
        }
        else if(x[count]=='i' || x[count]=='I'){
            I=1;
            count=count+1;
        }
        else if(x[count]=='o' || x[count]=='O'){
            o=1;
            count=count+1;
        }
        else if(x[count]=='u' || x[count]=='U'){
            u=1;
            count=count+1;
        }
        else{
            count=count+1;
        }
    }
    int num=0;
    for(int k=0;k<5;i++){
        if(arr1[k]>=1){
            num=num+1;
        }
    }
    printf("There are %d number of distinct vowels\n",num);
    //Lenght of string
    int len=0;
    int con=0;
    while(x[con]!='\0'){
        len=len+1;
        con=con+1;
    }
    // Reverse an array
    for(int j=0;j<len;j++){
        int swap;
        swap=x[len-1-j];
        x[len-1-j]=x[j];
        x[j]=swap;
    }
    for(int l=0;l<len;l++){
        printf("%c\t",x[l]);
    }

    return 0;
}