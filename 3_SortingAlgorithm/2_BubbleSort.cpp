#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){
    /*
    for(int cycle=0;cycle<size-1;cycle++){
        for(int step=0;step<size-cycle;step++){
            if(arr[step]>arr[step+1]){
                swap(arr[step],arr[step+1]);
            }
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }
*/

//Optimized Code
    bool swapped=false;
    for(int cycle=0;cycle<size-1;cycle++){
        for(int step=0;step<size-cycle;step++){
            if(arr[step]>arr[step+1]){
                swap(arr[step],arr[step+1]);
                swapped=true;
            }
        }
        if(swapped){
            break;
        }
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }
}

int main(){
    int array[5]={5,4,1,3,2};
    int lenght=5;
    bubble_sort(array,lenght);
}