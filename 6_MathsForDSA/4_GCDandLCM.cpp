#include<iostream>
using namespace std;
/*General Logic for finding GCD of two numbers is a and b is.
Simple thing is, continously reduce a with b or b with a(Bigger-Smaller) untill one turns equal to the other hence then return
that. Note that, if either of them is zero, return the other as GCD.*/

/*The general relation between LCM GCD and the two numbers is
n1*n2=LCM*GCD
Using that relation we can find LCM after we have already found the GCD.*/

int lcm(int g,int n1,int n2){
    return((n1*n2)/g);
}

int gcd(int n1,int n2){
    if(n1==0){
        return(n2);
    }
    if(n2==0){
        return(n1);
    }
    while(n1!=n2){
        if(n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    return(n1);
}

int main(){
    cout<<"Enter First Number"<<endl;
    int num1;
    cin>>num1;
    cout<<"Enter the Second Number"<<endl;
    int num2;
    cin>>num2;
    int GCD=gcd(num1,num2);
    int LCM=lcm(GCD,num1,num2);
    cout<<"The LCM and GCD are "<<LCM<<" "<<GCD<<endl;
}