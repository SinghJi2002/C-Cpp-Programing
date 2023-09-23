#include<iostream>
using namespace std;

void replace(string s,int size){
    string temp="";
    for(int i=0;i<size;i++){
        if(s[i]==' '){
            //temp.push_back('@40'); This is the wrong way of doing this.
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    s=temp;
    cout<<s<<endl;
}

int main(){
    string s="My name is Ashutosh";
    int lenght=s.size();
    replace(s,lenght);
}