#include<iostream>
using namespace std;

int peak_element_left(int arr[],int size,int max){
    //Thora discuss krte hai ki logic kya lgayenge. Dekho yha 2 progression dekhne mila, ek starting mai ascending or fir decending.
    int start=0;
    int end=size-1;
    //Yha mid ka role bhut important hai. Dhyan se nikalo
    int mid=start+((end-start)/2);
    while(start<end){/*Abhi tk jitna binary search kiye hai, wha condition rehta tha (start<=end). Yha dekho thora change hai.Iska reason
        thora der baad.*/
        mid=start+((end-start)/2);
        if(arr[mid]<arr[mid+1]){/*Yha ka logic samjho. Agr mid element apna alga element se chota hai, mtlb ki uske agle element tk
        initial ascending order progression ho rha hai. Yha start variable ka main kaam hai wo index tap krke rkhna, jha tk ascending
        progression ho rha hai, isiliye usko update krre.*/
            start=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
        /*Pehle ye samjhlo ki else if ke jagah else bhi use ho skta tha, pr kyuki hum samjhne ke liye
        code assan rkhna chahte hai, isiliye else if use krre.end variable ka main kaam hai wo index store krna jha tk last time
        ascending progression follow hua tha. Isiliye wo update hore.*/
            end=mid;
        /*Ek question jo dimag mai aayga wo hai ki, hr baar end=mid-1 hota tha, ab end=mid kyu hua? Well, abhi tu bola, end wo
        index store krra jha last time ascending progression hua tha(jha ascending progression khtm hua) isliye agr mid-1 krdete
        tu second last ascending progression element pe pahuch jate.*/
        }
    }
    return(start);
    //while mai = isliye use nii hua kyuki ye loop fir rukta hi nii.
}   

int main(){
    int array[6]={1,7,5,4,2,1};
    int max=0;
    int lenght=6;
    int result1=peak_element_left(array,lenght,max);
    cout<<result1<<endl;
}