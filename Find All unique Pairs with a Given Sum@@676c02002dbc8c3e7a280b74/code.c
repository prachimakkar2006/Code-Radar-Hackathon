#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",arr[i]);
    }
    int target;
    scanf("%d\n",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((i+j)==target){
                printf("%d %d",i,j);
            }

        }
       
    }
}