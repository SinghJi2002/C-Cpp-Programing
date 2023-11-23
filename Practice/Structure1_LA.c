#include<stdio.h>
//Note that we can declare structure outside any function if we want
struct time{
    int hours;
    int mins;
    int secs;
};
void sumOfTime(struct time t1,struct time t2){
    int sumHours=t1.hours+t2.hours;
    int sumMins=t1.mins+t2.mins;
    int sumSecs=t1.secs+t2.secs;
    printf("Sum of hours mins and secs is %d %d and %d\n",sumHours,sumMins,sumSecs);
}
int main(){
    struct time time1={2,50,26};
    struct time time2={3,35,45};
    sumOfTime(time1,time2);
    return 0;
}