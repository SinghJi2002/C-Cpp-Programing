#include<iostream>
using namespace std;

bool checkPrime(int num){
    if(num<=1){
        return(false);
    }
    int i=2;
    while(i>=2 && i<num){
        if(num%i==0){
            return(false);
        }
        i++;
    }
    return(true);
}

int main(){
    cout<<"Enter Number"<<endl;
    int n;
    cin>>n;
    bool result=checkPrime(n);
    if (result)
    {
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    
}