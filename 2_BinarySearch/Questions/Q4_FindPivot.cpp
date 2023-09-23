#include<iostream>
using namespace std;

int pivot(int arr[],int size){
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
/*The genral logic used is quite similar to the previous one. The only difference being that in last case we had 2 progressions in
ascending and decending unlike here we have 2 ascending progressions hence we observe change in condition used in line 10 here 
and the previous question. */
int main(){
    int array[5]={7,8,9,2,3};
    int lenght=5;
    int result=pivot(array,lenght);
    cout<<result<<endl;
}