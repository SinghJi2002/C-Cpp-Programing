#include<stdio.h>
int main(){
    int mark1,mark2,mark3;
    printf("Enter the marks obtained by the student\n");
    scanf("%d %d %d",&mark1,&mark2,&mark3);
    float total=(mark1+mark2+mark3)/3;
    char Grade;
    if(total>90){
        Grade='O';
        printf("Grade is O\n");
    }
    else if(total>80 && total<91){
        Grade='E';
        printf("Grade is E\n");
    }
    else if(total>70 && total<81){
        Grade='A';
        printf("Grade is A\n");
    }
    else if(total>60 && total<71){
        Grade='B';
        printf("Grade is B\n");
    }
    else if(total>50 && total<61){
        Grade='C';
        printf("Grade is C\n");
    }
    else if(total>40 && total<51){
        Grade='D';
        printf("Grade is D\n");
    }
    else{
        Grade='F';
        printf("Grade is F\n");
    }
    if (Grade=='F'){
        printf("Student is fail\n");
    }
    else{
        printf("Student is pass\n");
    }
    return 0;
}