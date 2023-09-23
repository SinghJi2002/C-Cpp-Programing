#include<iostream>
using namespace std;

void columnWiseSum(int matrix[][3]){
    int sum=0;
    int maxSum=0;
    int column;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+matrix[j][i];
        }
        if(sum>maxSum){
            maxSum=sum;
            column=i+i;
        }
        sum=0;
    }
    cout<<"Largest Sum of elements of column "<<column<<" is "<<maxSum<<endl;
}

void rowWiseSum(int matrix[][3]){
    int sum=0;
    int maxSum=0;
    int row=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+matrix[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            row=i+i;
        }
        sum=0;
    }
    cout<<"Largest Sum of elements of column "<<row<<" is "<<maxSum<<endl;
}

int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    rowWiseSum(matrix);
    columnWiseSum(matrix);
}