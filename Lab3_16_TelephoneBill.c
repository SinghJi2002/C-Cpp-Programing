#include<stdio.h>
int main(){
    int PR,CR,U;
    printf("Please enter the current reading,previous reading and unit cost\n");
    scanf("%d %d %d",&CR,&PR,&U);
    int bill=(CR-PR)*U;
    printf("Bill is %d rupee\n",bill);
    return 0;
}