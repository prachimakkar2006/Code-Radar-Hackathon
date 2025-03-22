#include <stdio.h>
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int num;
for(int i=0;i<n;i++){
    if(arr[i<num]){
        num=arr[i];
    }
}
printf("%d",num);

