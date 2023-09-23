//This questions is an example of 2 pointer approach
#include<iostream>
using namespace std;

int intersection(int arr1[],int arr2[],int size1,int size2){
    int intersection[size1];
    int count=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            //This block is part of optimization
            if(arr1[i]<arr2[j]){
                i++;
            }
            //This block was already present before the optimization
            else if(arr1[i]==arr2[j]){
                intersection[count]=arr1[i];
                count=count+1;
                arr2[j]=-1;
                break;
            }
            //This block is part of optimization.
            else if(arr1[i]>arr2[j]){
                j++;
            }
        }
    }
    if(count==0){
        return(-1);
    }
    else{
        for(int k=0;k<count;k++){
            cout<<intersection[k]<<'\t';
        }
        cout<<endl;
        cout<<count<<endl;
        return(1);
    }
}
int main(){
    int array1[6]={1,2,2,2,3,4};
    int array2[4]={2,2,3,3};
    int result=intersection(array1,array2,6,4);
    if(result==-1){
        cout<<"No intersecting elements"<<endl;
    }
}