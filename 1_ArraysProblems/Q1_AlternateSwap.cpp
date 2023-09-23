#include<iostream>
using namespace std;

void Display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

/*
void alternateSwap(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int swap;
        swap=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=swap;
    }
}
*/
//Another method for swaping would have been this

void alternateSwap(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
//Swap is a built in function in the C++ STL that helps us swap numbers without using the temporary variable

int main(){
    int array[10]={1,5,9,6,3,7,4,0,2,8};
    int lenght=10;
    alternateSwap(array,lenght);
    Display(array,lenght);
}
//Note that in the alternateSwap function the iterator runs 1 times less than the size of the array, this is because we want to avoid
//cases where we go out of bound lenght and face problems. This need is generally not felt in the cases of arrays with even lenghts but
//is felt with arrays of odd lenghts.