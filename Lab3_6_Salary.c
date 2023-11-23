#include<stdio.h>
int main(){
    int Basic,HRA,DA;
    printf("Enter Basic Salary, HRA and DA\n");
    scanf("%d %d %d",&Basic,&HRA,&DA);
    int salary=Basic+HRA+DA;
    printf("Salary is %d",salary);
    return 0;
}