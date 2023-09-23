#include<iostream>
#include<vector>
using namespace std;

vector<int> swap(vector<int> arr,int size){
    for(int i=0;i<(size/2);i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    return(arr);
}

int main(){
    vector<int>array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array.push_back(6);
    int lenght=array.size();
    vector<int> ans=swap(array,lenght);
    for(int k=0;k<lenght;k++){
        cout<<ans[k]<<endl;
    }
}