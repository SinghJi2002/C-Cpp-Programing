/*Lets talk about modulo and its properties. 
Modulo is 10^9+7
Lets look at some of its properties.
( a + b ) % m = a % m+ b % m
( a - b ) % m = a % m - b % m
( a * b ) % m = ( a % m ) * ( b % m ) 
 */

/*Lets talk about Fast exponentials. Note this method is better than orignal one. Its faster and more optimised
Lets say, we need to find a^b
Normally we go like,
a**b
Though in more optimised method,it goes like this,
(a^(b/2))^2, if b is even.
Also,
(a^(b/2))^2 whole multiplied to a, if b is odd.
Lets code.
*/

#include<iostream>
using namespace std;

int fastExponential(int b,int e){
    int ans=1;
    while(e>0){
        if(e%2==0){//Even
            ans=ans*b;
        }
        else{
            ans=ans
        }
    }
}

int main(){
    cout<<"Enter the base"<<endl;
    int base;
    cin>>base;
    cout<<"Enter the exponential"<<endl;
    int expo;
    cin>>expo;
    int result=fastExponential(base,expo);
}