#include<iostream>
using namespace std;

int total_occurances_left(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int count=0;
    int mid=(start+end)/2;
    if(key>arr[mid]){
        return(0);
    }
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            count=count+1;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return(count);
}

int total_occurances_right(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int count=0;
    int mid=(start+end)/2;
    if(key<arr[mid]){
        return(0);
    }
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            count=count+1;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return(count);
}
//Note that here another logic count have been used. Just like Q1 we calculate the first and the last index and then calculate the total
//number of occurances via, occurances=last index-first index+1 

int main(){
    int array[7]={1,2,3,3,3,3,5};
    int lenght=7;
    int key=2;
    int result1=total_occurances_left(array,lenght,key);
    int result2=total_occurances_right(array,lenght,key);
    cout<<"The number of times "<<key<<" occurs is "<<result1+result2<<endl;
}