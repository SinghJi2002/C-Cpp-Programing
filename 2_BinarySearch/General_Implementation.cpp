#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        //int mid=(start+end)/2; This code will fail if input integers are 2^31 -1 in both start and end. Hence we change this a bit
        int mid=(start/2)+((end-start)/2);
        if(key==arr[mid]){
            return(mid);
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[end]){
            end=mid-1;
        }
    }
    return(-1);
}

int main(){
    int array_even[6]={2,4,6,8,12,18};
    int key_even=12;
    int array_odd[5]={3,8,11,14,16};
    int key_odd=9;
    int even_index=binary_search(array_even,6,key_even);
    int odd_index=binary_search(array_odd,5,key_odd);
    if(even_index==-1){
        cout<<"Key not in the array"<<endl;
    }
    else{
        cout<<"Key is "<<even_index<<endl;
    }
    if(odd_index==-1){
        cout<<"Key not in the array"<<endl;
    }
    else{
        cout<<"Key is "<<odd_index<<endl;
    }
}