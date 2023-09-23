#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool unique(int arr[],int size){
    sort(arr,arr+size);
    vector<int> counter;
    int i=0;
    int comparator=arr[i];
    int j=0;
    int count=0;
    while(i<size){
        while(j<size){
            if(arr[j]==comparator){
                count++;
                j++;
            }
            else{
                break;
            }
        }
        i=j;
        counter.push_back(count);
        count=0;
        comparator=arr[i];
    }
    //This is how you sort a vector
    sort(counter.begin(),counter.end());
    int k=0;
    while(k<counter.size()){
        int l=k+1;
        int comp=counter[k];
        while(l<counter.size()){
            if(comp==counter[l]){
                return(false);
            }
            else{
                l++;
            }
        }
        k++;
    }
    return(true);
}

int main(){
    cout<<"Enter the lenght of the array"<<endl;
    int lenght;
    cin>>lenght;
    int array[lenght];
    for(int i=0;i<lenght;i++){
        int element;
        cout<<"Enter element"<<endl;
        cin>>element;
        array[i]=element;
    }
    bool result=unique(array,lenght);
    if(result){
        cout<<"Unique"<<endl;
    }
    else{
        cout<<"Not Unique"<<endl;
    }
}