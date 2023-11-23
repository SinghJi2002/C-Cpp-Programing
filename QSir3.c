#include<stdio.h>
int main(){
    float attendence_per_student;
    float basic_attendence;
    float total;
    float present;
    float attendance;
    float base;
    printf("Enter total number of students\n");
    scanf("%f",&total);
    printf("Enter number of students present\n");
    scanf("%f",&present);
    float absent=total-present;
    printf("Number of student absent %f\n",absent);
    float percentage=(absent*100)/total;
    printf("Percentage of student absent %f\n",percentage);
    if ((int)percentage>=80){
        base=60;
        attendence_per_student=20/20;
        basic_attendence=(percentage-80)*attendence_per_student;
        attendance=basic_attendence+base;
        printf("%fmins of free time to be alloted",attendance);
    }
    
    else if(((int)percentage>=60) && (percentage<80)){
        base=50;
        attendence_per_student=20/20;
        basic_attendence=((int)percentage-60)*attendence_per_student;
        attendance=basic_attendence+base;
        printf("%fmins of free time to be alloted",attendance);
    }
    else if(((int)percentage>=20) && (percentage<60)){
        base=10;
        attendence_per_student=40/40;
        basic_attendence=(percentage-10)*attendence_per_student;
        attendance=basic_attendence+base;
        printf("%fmins of free time to be alloted",attendance);
    }
    else if(((int)percentage>=40) && (percentage<50)){
        base=30;
        attendence_per_student=10/10;
        basic_attendence=(percentage-40)*attendence_per_student;
        attendance=basic_attendence+base;
        printf("%fmins of free time to be alloted",attendance);
    }
    else if(((int)percentage>=30) && (percentage<40)){
        base=20;
        attendence_per_student=10/10;
        basic_attendence=(percentage-30)*attendence_per_student;
        attendance=basic_attendence+base;
        printf("%fmins of free time to be alloted",attendance);
    }
    else if(((int)percentage>=20) && (percentage<30)){
        base=10;
        attendence_per_student=10/10;
        basic_attendence=(percentage-20)*attendence_per_student;
        attendance=basic_attendence+base;
        printf("%fmins of free time to be alloted",attendance);
    }
    else{
        printf("No free time");
    }
    return 0;
}