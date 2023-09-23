#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number of your choice"<<endl;
    cin>>n;
//This is how we take inputs in C++.
    cout<<"The number entered is: "<< n <<endl;
//This is how we print statements alongside variables in C++
    int a,b;
    cin>>a>>b;
    cout<<"The values of a and b are "<<a<<" "<<b<<endl; 
//This is how we take multiple inputs at same time in C++
    int z=cin.get();
//cin.get is specifically used for storing strings. So when we pass it in int datatype, we see the input character being mapped to thier 
//ASCII value and then printed.
    cout<<"get value is "<<z<<endl;
    if(n>0){
        cout<<"Number is positive"<<endl;
    }
    else if(n<0){
        cout<<"Number is negetive"<<endl;
    }
    else{
        cout<<"Entered number is zero"<<endl;
    }
}