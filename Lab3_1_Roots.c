#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter coefficient of quadratic\n");
    scanf("%f %f %f",&a,&b,&c);
    float D=b*b-4*a*c;
    double root1,root2;
    if(D>0 || D==0){
        root1=(-b+sqrt(D))/2*a;
        root2=(-b-sqrt(D))/2*a;
        printf("Root 1 %f\n",root1);
        printf("Root 2 %f\n",root2);
    }
    else{
        float posiD=-D;
        float realPart=-b/2*a;
        double imaginaryPart=sqrt(posiD)/2*a;
        printf("Root 1 %.2f+%.2fi\n",realPart,imaginaryPart);
        printf("Root 2 %.2f-%.2fi\n",realPart,imaginaryPart);    
    }   
    return 0;
}