#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> duplicate(vector<int>& nums,int size){
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int i=0;
    while(i+1<nums.size()){
        if(nums[i]==nums[i+1]){
            ans.push_back(nums[i]);
            i = i+2;
        }
        else{
            i++;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    cout<<"Enter the lenght of the array"<<endl;
    int lenght;
    cin>>lenght;
    vector<int> array;
    for(int i=0;i<lenght;i++){
        int element;
        cout<<"Enter element"<<endl;
        cin>>element;
        array.push_back(element);
    }
    vector<int> result=duplicate(array,array.size());
    for(int i:result){
        cout<<i<<endl;
    }
}