#include<iostream>
using namespace std;

void selection_sorting(int arr[],int size){
    for(int i=0;i<size;i++){
        int minPosition=i;
        //I am assuming that any number at index i is minimum
        for(int j=i+1;j<size;j++){
            if(arr[minPosition]>arr[j]){
                minPosition=j;
            }
        }
        //Swap
        int temp=arr[i];
        arr[i]=arr[minPosition];
        arr[minPosition]=temp;
    }
    //Display
    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }
}

int main(){
    int array[5]={5,4,1,3,2};
    int lenght=5;
    selection_sorting(array,lenght);
}