#include<iostream>
using namespace std;

int len(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        i++;
        count++;
    }
    return(count);
}

string reverse(string s){
    int lenght=s.size();
    for(int i=0;i<(lenght/2);i++){
        swap(s[i],s[lenght-1-i]);
    }
    return(s);
}

void display(char arr[]){
    cout<<arr<<endl;
}

void cut_out(char arr[]){
    string temp="";
    int lenght=len(arr);
    int cursor=0;
    int i=0;
    int count=0;
    while(arr[cursor]!='\0'){
        while(arr[cursor]!=' '){
            temp.push_back(arr[i]);
            cursor++;
        }
        string s=reverse(temp);
        for(i;i<=cursor;i++){
            arr[i]=s[count];
            count++;
        }
        temp="";
        count=0;
        cursor++;
        i=cursor;
    }
    display(arr);
}

int main(){
    char name[100]={'M','y',' ','n','a','m','e',' ','i','s',' ','A','s','h','u','t','o','s','h'};
    cut_out(name);
}