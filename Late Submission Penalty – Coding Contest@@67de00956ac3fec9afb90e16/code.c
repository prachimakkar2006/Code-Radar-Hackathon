#include<stdio.h>
int calculatePenalty(int subDay,int subMonth,int subYear,int dueDay,int dueMonth,int dueYear){
    int pay;
    if((subMonth==dueMonth) && (subYear==dueYear)&& dueDay!=subDay){
        pay=10*(subDay-dueDay);
    }
    else if(subYear==dueYear){
        pay=200*(subMonth-dueMonth);
    }
    else{
        pay=5000;
    }
    return pay;
}