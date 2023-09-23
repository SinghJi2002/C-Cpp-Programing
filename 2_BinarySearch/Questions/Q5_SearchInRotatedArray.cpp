#include<iostream>
using namespace std;

int search(int arr[],int start,int end,int key){
    int mid=start+((end-start)/2);
    while(start<=end){
        mid=start+((end-start)/2);
        if(key==arr[mid]){
            return(mid);
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int pivot(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return(start);
}

int main(){
    int array[5]={7,9,1,2,3};
    int lenght=5;
    int key=7;
    int result=pivot(array,lenght,key);
    /*General logic used is that we find the pivot element. Then we divide our array into two parts alongside pivot element. Then we check
    in which segment the key element lies, and then we run binary search on that particular segment.*/
    if((key>array[result])&&(key<=array[lenght-1])){
        int result1=search(array,result,lenght,key);
        cout<<result1<<endl;
    }
    else if((key<=array[result-1])&&(key>=array[0])){
        int result1=search(array,0,result,key);
        cout<<result1<<endl;
    }
    else if(key==array[result]){
        cout<<result<<endl;
    }
}