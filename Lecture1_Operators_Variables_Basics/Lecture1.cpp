#include<iostream>
//Above we have the preprossor directive
using namespace std;
int main(){
//Variable declaration in C++.Note that the rules of declaration are the same as in the previous case.
    int a=5;
    char b='A';
    bool c=true;
    float d=1.567;
    double e=1.634;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<"\n";
//Note that in C++ we observe that the compiler prints 1 in case of True and 0 in Case of False.

//The sizeof function. This functions is usefull when we want to find the space a given variable consumes. The return value is in terms of bytes. For example 4 bytes for integer.
    int SA=sizeof(a);
    int SB=sizeof(b);
    cout<<SA<<endl;
    cout<<SB<<endl;
    cout<<"Namaste Duniya"<<endl;
//endl is change of line command. We can also use \n in place endl.
    cout<<"My name is Ashutosh"<<"\n";
//';' is the end of line command use for declaring the end of the line.

//Type casting. Few Examples.
//Example 1
    char sample1='a';
    int convSample1=(int)(sample1);
    cout<<convSample1<<endl;
//In place of printing a the compiler print 97.
//Example 2
    int sample2=98;
    char convSample2=(char)(sample2);
    cout<<convSample2<<endl;
//In place of printing 98, we obtain b. Note that all this is happening in linkage to ASCII values.

//Lets discuss a special case. The maximum value upto which char can store is 255(2^8 -1). What happens
//when a value greater than 255 is stored.  Lets see.
    int sample3=41000;
    char convSample3=(char)(sample3);
    cout<<convSample3<<endl;
//As observable, a symbol is printed. Question is why is that particular symbol being printed here.
//For that we look into binary coding of 41000. This ASCII value of 410000 is 101000000101000. Now only 
//the last byte will be selected for such expansion. In this case it is 00101000. This represents '('
//Hence that is printed.

}