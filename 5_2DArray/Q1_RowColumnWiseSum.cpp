#include<iostream>
using namespace std;

void columnWiseSum(int matrix[][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+matrix[j][i];
        }
        cout<<"Sum of elements of column "<<i+1<<" is "<<sum<<endl;
        sum=0;
    }
}

void rowWiseSum(int matrix[][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+matrix[i][j];
        }
        cout<<"Sum of elements of row "<<i+1<<" is "<<sum<<endl;
        sum=0;
    }
}

int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    rowWiseSum(matrix);
    columnWiseSum(matrix);
}