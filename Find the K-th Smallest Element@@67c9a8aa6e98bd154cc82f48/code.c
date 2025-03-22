#include <stdio.h>
int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            return("%d ",k);
            break;
        }
        else{
            printf("-1");
        }
    }
}