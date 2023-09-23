#include<iostream>
using namespace std;
/*
int first_and_last(int arr[],int key,int size){
    int count=0;
    int first_occurance=-1;
    int last_occurance=-1;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            count++;
            if(count==1){
                first_occurance=i;
            }
            else{
                last_occurance=i;
            }
        }
    }
    if(count==1){
        last_occurance=first_occurance;
        return(first_occurance,last_occurance);
    }
    else if(count>1){
        return(first_occurance,last_occurance);
    }
    else{
        return(-1,-1);
    }
}
This code is useful with linear search
*/
//The logic below is based on binary search
int first(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int leftmost=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            leftmost=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return(leftmost);
}

int last(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int rightmost=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            rightmost=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return(rightmost);
}

int main(){
    int array[8]={1,2,4,4,4,4,4,4};
    int key=4;
    int lenght=8;
    int result1=first(array,key,lenght);
    if(result1==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"The first occurance is "<<result1<<endl;
    }
    int result2=last(array,key,lenght);
    if(result2==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"The last occurance is "<<result2<<endl;
    }
    /*
    Another way of doing this
    
    pair<int,int>p;
    p.first=first(array,key,lenght);
    p.second=last(array,key,lenght);
    */
}