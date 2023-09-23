/*Lets first understand the basic logic behind solving this question.
Here we will have 2 arrays. The arrays are to be added to other. Now there are 3 cases that can be there, lets see them.

1)The lenght of first array is greater than the second
  {1,2,3,4}
        {3}

2)The lenght of seconnd array is greater than the first
       {3}
 {1,2,3,4}
 
3)The lenght of the 2 arrays are the same
  {1,2,3,4}
  {5,6,7,8}

Now adjustment of these conditions will be seen in the code that will follow.

Now one more important thing is management of carry overs. It will be highlighted in the code that follows.*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> tempo,int size){
    for(int i=0;i<size/2;i++){
        swap(tempo[i],tempo[size-1-i]);
    }
    return(tempo);
}


vector<int> add(int arr1[],int arr2[],int size1,int size2){
    vector<int> temporery;//Sum of elements will be stored in this array.
    int i=size1-1;
    int j=size2-1;
    int sum;
    int carry=0;
    while(i>=0 && j>=0){
        int intermediate_sum=arr1[i]+arr2[j]+carry;
        int sum=intermediate_sum%10;
        //Since we are considering carry overs, if we add 6 and 4 to have 10 we use this expression as we need 0 of 10 not the whole 10.
        //Rest will be carry over.
        carry=intermediate_sum/10;
        //If we get 10, 10/10 will be 1, which inturn will be carry over. Another example is 18. 18/10,is 1 which is the carry over.
        temporery.push_back(sum);
        i--;
        j--;
    }
    //Now above code will work in all the 3 cases discussed above. Next code will work for case 1 only.
    while(i>=0){
        sum=arr1[i]+carry;
        carry=sum/10;
        temporery.push_back(sum);
        i--;
    }
    //This code below will only be executed in case 2.
    while(j>=0){
        sum=arr2[j]+carry;
        carry=sum/10;
        temporery.push_back(sum);
        j--;
    }
    vector<int> reversed=reverse(temporery,size1);
    return(reversed);
}

int main(){
    int array1[4]={1,2,6,4};
    int array2[2]={5,6};
    int lenght1=4;
    int lenght2=2;
    vector<int> ans=add(array1,array2,lenght1,lenght2);
    for(int i:ans){
        cout<<i<<endl;
    }
}