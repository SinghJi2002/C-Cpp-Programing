#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){
    for(int round=1;round<size;round++){
        //Round variable caters to last element of sorted array.
        //Note that I assume that the first element is always sorted while implementing the insertion sort. Hence i starts from 1.
        
        int temp=arr[round];
        //We have simply saved the number that is going for a comparison here.

        int step=round-1;
        // Step starts from i-1. The function of step is to catar to non sorted array,initially, arr[1:]. Though the placement of elements
        //of unsorted array is decided upon the numbers before it and the numbers that follow. Hence (j/step)=(i/round)-1.
        

        for(;step>=0;step++){//The reason for reverse looping is because whatever loop is behind step is consider sorted,hence changes
            //are made there.

            if(arr[step]>temp){//(if 5>4)
                arr[step+1]=arr[step];//The greater element is being shifted.
                //Then new array, _ 5 1 3 2.
            }
            else{
                //Since the placement of the element are the same and correct. We simple breakup.
                break;
            }
        }
        arr[step]=temp;
        //Then new array is 4 5 1 3 2
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }
}

int main(){
    int array[5]={5,4,1,3,2};
    int lenght=5;
    insertion_sort(array,lenght);
}