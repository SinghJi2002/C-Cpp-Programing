#include<iostream>
#include<vector>
using namespace std;

void shift0s(vector<int> arr,int size){
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[index]);
            index++;
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }
}

int main(){
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(3);
    arr.push_back(12);
    arr.push_back(0);
    shift0s(arr,arr.size());
}