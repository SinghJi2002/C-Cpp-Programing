#include<iostream>
using namespace std;

void sort(int arr[],int size){
    int i=0;//This a pointer for 0
    int j=0;//This is a pointer for 1
    int k=size-1;//This is pointer for 2
    while(j<=k){
        switch (arr[j])
        {
        case 0:
            swap(arr[i++],arr[j++]);
            //Isko yaad rkhne ka simple trick. Dekho agr 0 hai hi, tu i tu aage parhega hi,or j kyuki 1 ko dekhra tu usko bhi barhna hoga.
            break;
    
        case 1:
            j++;
            break;
    
        case 2:
            swap(arr[j],arr[k--]);
            //Isko yaad rkhne ka simple trick. Dekho agr 2 hai hi, tu switch tu hoga hi,or j kyuki 1 ko dekhra tu aage nii barherga
            //kyuki 2 hoskta hai but kyuki k 2 dekhra usko piche barhna hoga kyuki uss jagah be 2 confirmed hai.
            break;
        }
    }
}

int main(){
    int lenght;
    cout<<"Enter lenght of the array"<<endl;
    cin>>lenght;
    int array[lenght];
    for(int i=0;i<lenght;i++){
        int element;
        cout<<"Enter element"<<endl;
        cin>>element;
        array[i]=element;
    }
    sort(array,lenght);
    for(int i=0;i<lenght;i++){
        cout<<array[i]<<endl;
    }
}