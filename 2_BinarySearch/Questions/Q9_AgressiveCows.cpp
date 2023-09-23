#include<iostream>
using namespace std;

int isPossible(int arr[],int size,int cows,int mid){
    int cowCount=1;
    int initialPlacementOfCow=arr[0];
    for(int i=0;i<size;i++){
        /*In the condition below we are saying, the maximum distance at which the cows can be placed is mid. So, once if obtained a
        a distance which is greater than the maxi distance mid,we place the second cow, after we placed the first at intialPlacement
        .Now we then check, whether we reached the maximum cow count, if yes, return true, or else, re run the code to place the next
        cow. If in case, loops end and all our cows arent placed, it means that the maxi distance we found is more than what it will
        take to fit all the cows, so if return false. Since current mid is very high, we change the end to mid-1, to look at leftward 
        options, but if thats not the case we update start to mid+1, since if this mid can fit all the cows, there might be a higher
        one too.*/ 
        if((arr[i]-initialPlacementOfCow)>=mid){
            cowCount=cowCount+1;
            if(cowCount==cows){
                return(true);
            }
            initialPlacementOfCow=arr[i];//Now the place of 2nd cow is the initial for the third cow.

        }
    }
    return(false);
}

int aggressiveCows(int arr[],int size,int cows,int min,int max){
    int start=0;
    int end=max-min;//End initially measures maximum possible distance between two cows. So max distance will be max-min.
    int mid=start+((end-start)/2);
    int ans=-1;
    while(start<=end){
        mid=start+((end-start)/2);//Mid is storing the maximum posible distance between the cows. Later it will store the maxi distances.
        if(isPossible(arr,size,cows,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return(ans);
}
 
int main(){
    int array[6]={4,3,1,2,6,5};
    int lenght=6;
    int cowCount=2;
    //Firstly this is a disorganised array. So we sort it.
    for(int i=0;i<lenght;i++){
        for(int j=0;j<lenght-1;j++){
            if(array[i]<array[j]){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    int min=array[0];
    int max=array[lenght-1];
    int result=aggressiveCows(array,lenght,cowCount,min,max);//Result stores maximum distance possible between two cows.
    cout<<result<<endl;
}
