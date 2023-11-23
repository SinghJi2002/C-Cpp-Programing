#include<stdio.h>
int main(){
    int n,sum=0;
    int newArray[10]={9,23,44,33,53,28,77,43,91,93};
    for(int k=0;k<10;k++){
        int z=newArray[k];
        while(z>0){
            n=z%10;
            if(n==3){
                sum=sum+newArray[k];
                break;
            }
            else{
                z=z/10;
                continue;
            }
        }
    }
    printf("The sum of elements of array is %d\n",sum);
    return 0;
}