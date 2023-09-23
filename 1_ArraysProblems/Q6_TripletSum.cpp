#include<iostream>
using namespace std;

void triplet_sum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if((arr[i]+arr[j]+arr[k])==sum){
                    cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}"<<endl;
                }
            }
        }
    }
}


int main(){
    int element_sum;
    cout<<"Enter the element sum"<<endl;
    cin>>element_sum;
    int lenght;
    cout<<"Enter the lenght of the array"<<endl;
    cin>>lenght;
    int array[lenght];
    for(int i=0;i<lenght;i++){
        int element;
        cout<<"Enter element of the array"<<endl;
        cin>>element;
        array[i]=element;
    }
    triplet_sum(array,lenght,element_sum);
}