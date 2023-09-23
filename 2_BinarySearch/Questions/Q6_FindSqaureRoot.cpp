#include<iostream>
using namespace std;

int sqaure_root(int n){
    int start=0;
    int end=n+1;
    int mid=start+((end-start)/2);
    while(start<=end){
        mid=start+((end-start)/2);
        int compare=mid*mid;
        if(compare==n){
            return(mid);
        }
        else if(compare>n){
            end=mid-1;
        }
        else if(compare<n){
            start=mid+1;
        }
    }
    return(mid);
}
/*Let note the logic used above. We here are calculating the square root. Lets say I enter 36. Now runing binary search.
I ran a loop from 0 to 36(start to end)
The mid comes out to be 18. We find the sqaure of 18 to be 256. Which is more than 36 so we continue
Now we run loop from 0 to 18.
The mid comes out to be 9. Now the sqaure of 9 is 81 which is greater than 36. So we re run this.
Now we run it from 0 to 9. Mid comes out to be 4. 4 square is 16 which is less than 36. So we adjust the limit.
Now we run the search from 5 to 9. Mid is 7. 7 sqaured is 49, which is more. Limits readjusted, 5 to 7
Mid is 6. Square is 36. 6 is returned.*/

double precision(int sqaured,int decimal_solution,int precise){
    double factor=1;
    double float_solution=decimal_solution;
    for(int i=0;i<precise;i++){
        double practice_factor=factor/10;
        while(float_solution*float_solution<sqaured){
            float_solution=float_solution+factor;
        }
    }
    return(float_solution);

}

int main(){
    int num;
    cout<<"Enter the number to find sqaure root"<<endl;
    cin>>num;
    int result=sqaure_root(num);
    cout<<"The square root of "<<num<<" is "<<result;
    //Lets work on precision.
    cout<<"Enter the decimal upto you want to be precised"<<endl;
    int precise;
    cin>>precise;
    double precised_solution=precision(num,result,precise);
    cout<<precised_solution<<endl;
}