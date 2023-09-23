#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> arr,int size,int factor){
    //Create new Array. Idhr is sb ko store krenge, sbko mn rotated terms ko
    vector<int> temporary(arr.size());
    /*General Logic Samjho.Yha ek vector/array hai, or factor hai. Factor define kr rha hai, ki hr element to kitna shift krna hai. That is
    agr given array is {1,3,2,4} or factor 2 hai, then new array should be, {2,4,1,3}. Right ahead is a way of implementing it.*/
    for(int i=0;i<arr.size();i++){
        temporary[(i+factor)%arr.size()]=arr[i];
    /*Lets dicuss, what happening above. Basic logic of shifting an array by 2 places is (orignal index+Factor).Though we cannot
    shift the elements such as 2 and 4 from previous expression as out of bond exception will arise.Hence above expressions is 
    is changed to (index+factor)%size. This will help in this way. Lets see first shift,1 from index 0 to 2. (0+2)%4.
    But it is effective when shifting last 2 elements. That is, 2 and 4. 2 shifts from index 2 to index (2+2)%4, hence 1. So
    2 shifts to index 1. Similar happens with 4. Although, this all is saved in a temporary array.*/
    }
    //Copy the temporary array into the original one
    arr=temporary;
    return(arr);
}

int main(){
    vector<int> array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array.push_back(6);
    array.push_back(7);
    int factor=2;
    vector<int> ans=rotate(array,array.size(),factor);
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<endl;
    }
}