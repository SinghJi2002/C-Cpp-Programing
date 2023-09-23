#include<iostream>
#include<string>
using namespace std;

string compress(string s,int size){
    int iterator=0;
    int wanderor=0;
    int count=0;
    while(iterator<size){
        while(s[wanderor]==s[iterator] && wanderor<size){
            wanderor++;
            count++;
        }
        s[iterator]=s[iterator];
        if(count>1){
            iterator++;
            s[iterator]=char(count);
        }
        iterator++;
        int deletion=wanderor-iterator;
        s.erase(iterator,deletion);
        iterator=wanderor;
        size=s.size();
        count=0;
    }
    return(s);
}

int main(){
    string s="aabccc";
    string result=compress(s,s.size());
    cout<<s<<endl;
}