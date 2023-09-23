#include<iostream>
using namespace std;

void maximum(int arr[]){
    int maxi=0;
    char storeMaxi;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            storeMaxi='a'+i;
        }
    }
    cout<<"Maximum number of occurances is achieved by "<<storeMaxi<<endl;
}

void counter(string s,int arr[],int size){
    int number=0;
    for(int i=0;i<s.size();i++){
        char currentChar=s[i];
        if((currentChar>='a')&&(currentChar<='z')){
            number=s[i]-'a';
        }
        else if((currentChar>='A')&&(currentChar<='Z')){
            number=s[i]-'A';
        }
        arr[number]=arr[number]+1;
    }
    maximum(arr);
}

int main(){
    int array[26]={0};
    string s="MyNameIsAshutosh";
    int lenght=26;
    counter(s,array,lenght);
}