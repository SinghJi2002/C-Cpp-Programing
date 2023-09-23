#include<iostream>
using namespace std;

int len(char arr[]){
    int count=0;
    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return(count);
}

int main(){
    char name[15];
    cout<<"Enter your name"<<endl;
    cin>>name;
    int lenght=len(name);
    cout<<"Lenght is "<<lenght<<endl;
}