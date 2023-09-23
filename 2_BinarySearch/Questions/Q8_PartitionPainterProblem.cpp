//The general logic applied is pretty same like the book allocation problem

#include<iostream>
using namespace std;

bool isPossible(int mid,int painters,int size,int arr[]){
    int boardsAllocated=0;
    int painterCount=1;
    for(int i=0;i<size;i++){
        if((boardsAllocated+arr[i])<=mid){
            boardsAllocated=boardsAllocated+arr[i];
        }
        else{
            painterCount=painterCount+1;
            if((painterCount>painters)||(arr[i]>mid)){
                return(false);
            }
            boardsAllocated=arr[i];
        }
    }
    return(true);
}


int partitionPainter(int arr[],int painters,int size){
    int start=0;
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+((end-start)/2);
    int ans=-1;
    while(start<=end){
        mid=start+((end-start)/2);
        if(isPossible(mid,painters,size,arr)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return(ans);
}

int main(){
    int array[4]={10,20,30,40};
    int noPainters=2;
    int lenght=4;
    int results=partitionPainter(array,noPainters,lenght);
    cout<<results<<endl;
}