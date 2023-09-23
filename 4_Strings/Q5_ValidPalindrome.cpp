#include<iostream>
#include<vector>
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

char toLowerCase(char ch){
    if((ch>'A')&&(ch<='Z')){
        ch=ch+'a'-'A';
    }
    return(ch);
}

void palindrome(string s){
    int i=0;
    int count=0;
    int lenght=s.size();
    int start=0;
    int end=lenght-1;
    int condition=true;
    while(start<=end){
        if(s[start]==s[end]){
            start++;
            end--;
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

void valid(char arr[]){
    string s="";
    int lenght=len(arr);
    int i=0;
    for(int j=0;j<lenght;j++){
        if(((arr[j]>'A')&&(arr[j]<'Z'))||((arr[j]>'a')&&(arr[j]<'z'))||((arr[j]>'0')&&(arr[j]<'9'))){
            s.push_back(toLowerCase(arr[j]));
        }
    }
    palindrome(s);
}

int main(){
    char string[10];
    cout<<"Enter word"<<endl;
    cin>>string;
    valid(string);
}