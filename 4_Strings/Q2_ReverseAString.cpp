#include<iostream>
#include<vector>
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

void reverse(char arr[]){
    int lenght=len(arr);
    for(int i=0;i<(lenght/2);i++){
        swap(arr[i],arr[lenght-1-i]);
    }
    for(int k=0;k<lenght;k++){
        cout<<arr[k]<<endl;
    }
}

int main(){
    char name[10];
    cout<<"Enter your name"<<endl;
    cin>>name;
    reverse(name);
}