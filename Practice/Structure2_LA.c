#include<stdio.h>
//Structure Declaration
struct student{
    char name[100];
    int roll;
    char gender[10];
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
};
int main(){
    int n;
    printf("Enter the number of test cases you want\n");
    scanf("%d",&n);
    struct student array[n];
    for(int i=0;i<n;i++){
        printf("Enter name\n");
        scanf("%s",&array[i].name);
        printf("Enter roll\n");
        scanf("%d",&array[i].roll);
        printf("Enter gender\n");
        scanf("%s",&array[i].gender);
        printf("Enter marks\n");
        scanf("%d",&array[i].mark1);
        scanf("%d",&array[i].mark2);
        scanf("%d",&array[i].mark3);
        scanf("%d",&array[i].mark4);
        scanf("%d",&array[i].mark5);
    }
    for(int j=0;j<n;j++){
        printf("Data is %s %d %s %d %d %d %d %d\n",array[j].name,array[j].roll,array[j].gender,array[j].mark1,array[j].mark2,array[j].mark3,array[j].mark4,array[j].mark5);
    }
    return 0;
}