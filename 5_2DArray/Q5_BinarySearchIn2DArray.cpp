#include<iostream>
using namespace std;

int binarySearch(int matrix[][3],int key){
    int start=0;
    int end=8;
    int row=3;
    int column=3;
    int mid=start+((end-start)/2);
    while(start<=end){
        mid=start+((end-start)/2);
        int index1=mid/column;
        int index2=mid%column;
        if(matrix[index1][index2]==key){
            return(1);
        }
        else if(key>matrix[index1][index2]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return(0);
}

int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    int key=1;
    int result=binarySearch(matrix,key);
    if(result==1){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}