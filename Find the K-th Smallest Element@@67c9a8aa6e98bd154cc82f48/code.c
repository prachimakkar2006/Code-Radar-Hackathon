#include <stdio.h>
int kthSmallest(int arr[],int n,int k){
    if(k<n){
        return -1;
    }
    for(int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        return arr[k-1];
    }
    return -1;
}