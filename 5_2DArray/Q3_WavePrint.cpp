#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(int matrix[][3]){
/*    int initialJ=0;
    int j=0;
    int i=0;
    for(int i=0;i<3;i++){
        while(j<3 && j>=0){
            if(initialJ==0){
                cout<<matrix[j][i]<<endl;
                j++;
            }
            else if(initialJ==2){
                cout<<matrix[j][i]<<endl;
                j--;
            }
        }
        if(j==3){
            j--;
        }
        else if(j==-1){
            j++;
        }
        initialJ=j;
    }
*/
//Logic 2
vector<int> temporary;
for(int i=0;i<3;i++){
    if(i%2==0){
        for(int j=0;j<3;j++){
            temporary.push_back(matrix[j][i]);
        }
    }
    else{
        for(int j=2;j>=0;j--){
            temporary.push_back(matrix[j][i]);
        }
    }
    }
    return(temporary);
}


int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    vector<int> result=wavePrint(matrix);
    for(int i:result){
        cout<<i<<endl;
    }
}