#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> arr1,vector<int> arr2){
    //The general logic that is going to be involved is that we create a new array, which will be the combination of the two array.
    //We pick elements from array1, compare it with the elements of array2, find the smallest element and append it into the third array.
    vector<int> arr3;
    int i=0;
    int j=0;
    while((i<arr1.size())&&(j<arr2.size())){
        if(arr1[i]>arr2[j]){
            arr3.push_back(arr2[j]);
            j++;
        }
        else{
            arr3.push_back(arr1[i]);
            i++;
        }
    }
    //One thing that we need to understand till this point is that one of the two arrays atleast have had thier whole run and remaining
    //array elements just need to be copied.
    while(i<arr1.size()){
        arr3.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        arr3.push_back(arr2[j]);
        j++;
    }
    return(arr3);
}

int main(){
    vector<int> array1;
    array1.push_back(1);
    array1.push_back(3);
    array1.push_back(5);
    array1.push_back(7);
    array1.push_back(9);
    array1.push_back(11);
    vector<int> array2;
    array2.push_back(2);
    array2.push_back(8);
    array2.push_back(10);
    vector<int> ans=mergeSortedArrays(array1,array2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}