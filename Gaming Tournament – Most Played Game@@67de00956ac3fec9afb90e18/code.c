#include <stdio.h>
int mostPlayedGame(int games[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(games[i]==games[j]){
                count+=1;
                if(count>1){
                    printf("%d",games[i]);
                }
            }
        }
    
    }
}