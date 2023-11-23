#include<stdio.h>
#include<math.h>
int main(){
    int pv,r,n;
    double fv;
    printf("Enter pv\n");
    scanf("%d",&pv);
    printf("Enter r\n");
    scanf("%d",&r);
    printf("Enter n\n");
    scanf("%d",&n);
    int fn=pv*(1+r);
    fv=pow(fn,n);
    printf("Future amount is %f\n",fv);
    return 0;
}