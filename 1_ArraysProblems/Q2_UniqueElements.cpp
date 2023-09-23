#include<iostream>
using namespace std;
/*
void unique(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
            }
        }
        if(count==1){
            cout<<"The unique number is "<<arr[i]<<endl;
            break;
        }
        else{
            count=0;
        }
    }
}
*/
//Above we see a very simple hence generalised logic to approach this question. Let see a faster and more optimised way of solving this.
//Lets use XOR

void unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];//^ is the XOR operator. Look At the notes for better understanding
    }
    cout<<"The unique number is "<<ans<<endl;
}

int main(){
    cout<<"Enter the numeber of test cases you want"<<endl;
    int testCases;
    cin>>testCases;
    for(int j=0;j<testCases;j++){
        cout<<"Enter the lenght of the array"<<endl;
        int lenght;
        cin>>lenght;
        cout<<"Enter the string containing elements of the array"<<endl;
        char input[lenght];
        cin>>input;
        int count=0;
        int arr[lenght];
        for(int i=0;i<(lenght);i++){
            if(input[i]!=' '){
                arr[count]=int(input[i])-48;//Or int(input[i])-'0'
                count=count+1;
            }
        }
        for(int i=0;i<lenght;i++){
            cout<<arr[i]<<endl;
        }
        unique(arr,lenght);
    }
}