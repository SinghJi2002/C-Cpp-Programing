#include<stdio.h>
int main(){
    //Declaration of structures
    struct student{
        char name[100];
        int roll;
        char gender[10];
    };
    //Two student datas
    struct student s1={"Ashutosh",22052974,"Male"};
    struct student s2={"Divyansh",22052980,"Female"};
    //Lets display data 
    printf("The name, roll and gender of student 1 is %s %d and %s\n",s1.name,s1.roll,s1.gender);
    printf("The name, roll and gender of student 1 is %s %d and %s\n",s2.name,s2.roll,s2.gender);
    return 0;
}