#include<iostream>
using namespace std;

string removeAdjacent(string s,int size){
    int i=0;
    while(i<size-1){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=0;
            size=s.size();
        }
        else{
            i++;
        }

    }
    return(s);
}

int main(){
    string s="azxxzy";
    string result=removeAdjacent(s,s.size());
    cout<<result<<endl;
}