#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(int matrix[][3]){
    vector<int> temporary;
    int startRow=0;
    int endRow=2;
    int startColumn=2;
    int endColumn=0;
    int elementCount=9;
    int elementPrinted=0;
    while(elementPrinted<elementCount){
        //Print first row
        for(int index=endColumn;index<startColumn && elementPrinted<elementCount;index++){
            temporary.push_back(matrix[startRow][index]);
            elementPrinted++;
        }
        //Print first column
        for(int index=startRow;index<endRow && elementPrinted<elementCount;index++){
            temporary.push_back(matrix[index][startColumn]);
            elementPrinted++;
        }
        //Print last row
        for(int index=startColumn;index>endColumn && elementPrinted<elementCount;index--){
            temporary.push_back(matrix[endRow][index]);
            elementPrinted++;
        }
        //Print the last column
        for(int index=endRow;index>startRow && elementPrinted<elementCount;index--){
            temporary.push_back(matrix[index][endColumn]);
            elementPrinted++;
        }
        startRow++;
        endRow--;
        startColumn--;
        endColumn++;
    }
    return(temporary);
}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result=spiralPrint(matrix);
    for(int i:result){
        cout<<i<<endl;
    }
}
//Complex is O(mn)