//GCD
#include<stdio.h>
int GCD(int x,int y,int z,int a){
    if(x==y){
        return(x);
    }
    else if(x==0 || y==0){
        return(0);
    }
    else if(z==x){
        return(a);
    }
    else{
        int GC;
        if(z<=x && x%z==0 && y%z==0){
            GC=z;
            return(GCD(x,y,z+1,GC));    
        }
        else if(z<=x){
            return(GCD(x,y,z+1,a));
        }
    }
}
int main(){
    printf("Enter the two numbers to find thier GCDs\n");
    int m,n;
    scanf("%d%d",&m,&n);
    int factor=1;
    int assumedGCD=1;
    int gcd=GCD(m,n,factor,assumedGCD);
    printf("GCD is %d",gcd);
    return 0;
}