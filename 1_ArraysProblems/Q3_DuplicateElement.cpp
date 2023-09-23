#include<iostream>
using namespace std;
/*
void check_Duplicate(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
            }
        }
        if(count>1){
            cout<<"The duplicate element is "<<arr[i]<<endl;
            break;
        }
        else{
            count=0;
        }
    }
}
*/
//Above is the one approach of doing this. Lets look at another approach
void check_Duplicate(int arr[],int size){
    int ans=0;
    //Now we know that if we have a array lenght N, we have elements from 1 to N-1 atleast available on
    //array after which there is one repeating element. So, to solve this we run 2 loops and use XOR
    //in them. One loop XORing all the elements of array, the other consecutive loop XORing 1 to N-1
    //Leaving us only with the duplicate value. Let see the code in action
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int j=1;j<size;j++){
        ans=ans^j;
    }
    cout<<"The duplicate element is "<<ans<<endl;
}
int main(){
    cout<<"Enter the number of test cases you want"<<endl;
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        cout<<"Enter the lenght of array you want"<<endl;
        int lenghtOfArray;
        cin>>lenghtOfArray;
        int array[lenghtOfArray];
        for(int j=0;j<lenghtOfArray;j++){
            int element;
            cout<<"Enter the element"<<endl;
            cin>>element;
            array[j]=element;
        }
        check_Duplicate(array,lenghtOfArray);
    }
}