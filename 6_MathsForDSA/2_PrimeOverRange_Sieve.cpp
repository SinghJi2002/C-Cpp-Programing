//Sieve Method
#include<iostream>
#include<vector>
using namespace std;

int checkPrime(int n){
    int count=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        //This loop will select numbers whose table we will go through and mark those numbers that come in it as not primes.
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }     
    }
    return(count);
}

int main(){
    cout<<"Enter Number"<<endl;
    int num;
    cin>>num;
    int count=checkPrime(num);
    cout<<"Number of prime numbers are "<<count<<endl;
}
//COMPLEXISTY is nlog(log n).