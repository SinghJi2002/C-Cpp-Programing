#include<stdio.h>
int main(){
    int dosa=100,egg=50,chowmin=120,pasta=100;
    printf("Enter order blockwise\n0 for dosa\n1 for egg\n2 for chowmin\n3 for pasta\n");
    int arr[4];
    for(int i=0;i<4;i++){
        printf("Block %d\n",i);
        int order;
        scanf("%d",&order);
        arr[i]=order;
    }
    int ds=dosa*arr[0];
    int eg=egg*arr[1];
    int ch=chowmin*arr[2];
    int ps=pasta*arr[3];
    printf("Your total bill is %d\n Your order was\ndosa %d\negg %d\nchowmin %d\npasta %d\n",ds+eg+ch+ps,arr[0],arr[1],arr[2],arr[3]);
    return 0;
}