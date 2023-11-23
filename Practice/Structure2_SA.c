#include<stdio.h>
int main(){
    struct lenght{
        float lenght;
    };
    //Lenght In Inch
    struct lenght inch={2.5};
    struct lenght feet={4};
    //Converting inch to feet
    inch.lenght=inch.lenght*0.08;
    float sum=inch.lenght+feet.lenght;
    printf("Sum of the %f\n",sum);
    return 0;
}