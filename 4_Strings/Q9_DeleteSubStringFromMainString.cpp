#include<iostream>
using namespace std;

void find_n_cut(string s,string part,int size){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    cout<<s<<endl;
}

int main(){
    string s="aabbcccabc";
    string part="abc";
    int lenght=s.size();
    find_n_cut(s,part,lenght);
}