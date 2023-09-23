#include<iostream>
using namespace std;

bool ispossible_adjust(int arr[],int mid,int size,int candidate){
    //The variable keeps count of the student to whom the book is allocated.
    int current_candidate=1;
    //This variables keeps count book pages allocated to each student
    int page_sum=0;
    for(int i=0;i<size;i++){
        //Only if sum of pages allocated is less than current limit "mid".
        if((page_sum+arr[i])<mid){
            page_sum=page_sum+arr[i];
        }
        //That variable stores the value for each candidate. If it fails means, limit for that candidate is execeded. Now we move to next.
        else{
            current_candidate=current_candidate+1;
            //Below we are checking if we have crossed the candidate limit or the new value being alloted is less that mid or not.
            if((current_candidate>candidate)||(arr[i]>mid)){
                /*So the other student is allocated with next book. Note after this, it will recall the if block again and thing will 
                continue from there*/
                return(false);
            }
            page_sum=arr[i];
        }
    }
    return(true);
}


int book_allocation(int arr[],int size,int candidates){
    //Start is used to allocate minimum pages we can give to a candidate.
    int start=0;
    //For calculation of end, we calculate the maximum number of pages available to us.
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    //The mid variable will be continously used adjust maximum limit on how many books can be alloted to a candidate at max.
    int mid=start+((end-start)/2);
    int ans=-1;
    while(start<=end){
        mid=start+((end-start)/2);
        if(ispossible_adjust(arr,mid,size,candidates)){
            //That function checks wheather its possible for us to allot books to candidates at max limit of current mid.
            
            //We will store the current successful value of mid in ans variable for it to be returned later.
            ans=mid;

            /*If its true,lets say for mid=50, we can allot books to 2 students. Its implies that for all value of mid>50, it will hold 
            true , hence we will modify end and lower its value.*/
            end=mid-1;
        }
        else{
            /*Lets say for mid=50, we cannot allot books to 2 students. Its implies that for all value of mid<50, it will hold 
            true , hence we will modify start and increase its value.*/
            start=mid+1;
        }
    }
    return(ans);
}

int main(){
    int array[4]={5,5,5,5};
    int lenght=4;
    int num_candies=2;
    int result=book_allocation(array,lenght,num_candies);
    cout<<result-1<<endl;
}