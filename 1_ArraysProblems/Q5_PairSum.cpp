#include<iostream>
using namespace std;

void pairSum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])==sum){
                cout<<"{"<<arr[i]<<","<<arr[j]<<"}"<<endl;
            }
        }
    }
}

int main(){
    int element_sum;
    cout<<"Enter the elementary sum"<<endl;
    cin>>element_sum;
    int lenght;
    cout<<"Enter the lenght of the array"<<endl;
    cin>>lenght;
    int array[lenght];
    for(int i=0;i<lenght;i++){
        int element;
        cout<<"Enter array element"<<endl;
        cin>>element;
        array[i]=element;
    }
    pairSum(array,lenght,element_sum);
}