/*Lets talk about the theory Then move forward. There can be three cases to solve this question.
1)When array is sorted
{1,2,3,4,5}

2)When array is rotated
{4,5,1,2,3}

4)When elements are the same
{1,1,1}

3)When array is neither sorted nor rotated
{1,2,5,4,6}

If i is an iterator, then the general case to observe is 
array[i]<array[i-1]

Note the if we keep a count of cases where above condition is true, we see that occuring only once in case 1 and case 2. In case 1 we see
it when 1 is compared with 5(transevsing whole array and the 0 index) and in case 2  we see it when 4 is compared with five

In case 3 we see such cases are none as all the elements are the same.

But see that when case 4 is observed, it occurs twice. At 5 to 4 and 6 to 1.

Hence rotated or sorted occurs when count of conditions is less than 1.*/
#include<iostream>
#include<vector>
using namespace std;

bool check(int arr[],int size){
    int count=0;
    for(int i=1;i<size;i++){
        if(arr[i]<arr[i-1]){
            count++;
        }
    }
    if(arr[0]<arr[size-1]){
            count++;
    }
    
    if(count<=1){
        return(true);
    }
    else{
        return(false);
    }
}

int main(){
    int array[5]={1,1,1,1,1};
    int lenght=5;
    if(check(array,lenght)){
        cout<<"Rotated Or Sorted"<<endl;
    }
    else{
        cout<<"Not rotated nor Sorted"<<endl;
    }
}