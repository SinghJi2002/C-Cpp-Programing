#include<iostream>
using namespace std;

int len(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return(count);
}

void palindrome(char arr[]){
    int lenght=len(arr);
    int firstPointer=0;
    int secondPointer=lenght-1;
    bool condition=true;
    while(firstPointer<=secondPointer){
        if(arr[firstPointer]==arr[secondPointer]){
            firstPointer++;
            secondPointer--;
        }
        else{
            condition=false;
            break;
        }
    }
    if(condition){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}

int main(){
    char string[10];
    cout<<"Enter word"<<endl;
    cin>>string;
    palindrome(string);
}