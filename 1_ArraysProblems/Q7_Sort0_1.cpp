#include<iostream>
using namespace std;

void sort(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<'\t';
    }
}

int main(){
    int lenght;
    cout<<"Enter the lenght of the array"<<endl;
    cin>>lenght;
    int array[lenght];
    for(int i=0;i<lenght;i++){
        int element;
        cout<<"Enter zero or one"<<endl;
        cin>>element;
        array[i]=element;
    }
    sort(array,lenght);
}