#include<iostream>
using namespace std;

bool substring(string s1,string s2){
    int arr1[26]={0};
    int arr2[26]={0};
    int lenght1=s1.size();
    int lenght2=s2.size();
    int j=0;
    int k=0;
    for(int i=0;i<lenght1;i++){
        int index=s1[i]-'a';
        arr1[index]++;
    }
    while(j<lenght2-1){
        for(k;k<lenght1;k++){
            int index=s2[j]-'a';
            arr2[index]++;
            j++;
        }
        if(arr1==arr2){
            return true;
        }
        k=0;
        j--;
        arr2[26]={0};
    }
    return(false);
}

int main(){
    string mainString="abeidbaooo";
    string subString="ab";
    bool condition=substring(subString,mainString);
    if(condition){
        cout<<"It occured"<<endl;
    }
    else{
        cout<<"It did not occur"<<endl;
    }

}