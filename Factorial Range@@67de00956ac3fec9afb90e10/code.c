#include <stdio.h>
int factorial(int n){
    if(n==1||n==0){
        return 0;
    }
    else{
        return (n*factorial(n-1));
    }
}
void factorialRange(int start,int end){
    if(start>end || start<0){
        printf("Invalid Range");
    }
    else{
        for(int i=0;i<=end;i++){
            printf("%d\n",factorial(i));
        }
    }
}