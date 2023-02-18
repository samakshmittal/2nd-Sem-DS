#include <stdio.h>
int main(){
    int t, n, i, j, x;
    scanf("%d", &t);          //no of games
    for(i=1; i<=t; i++){
        scanf("%d", &n);
        int arr[n];
        for(j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        int t=arr[n-1];
        int i=0;
        while(i==0){
            for(j=n-1; j>=0; j--){
                if(j<n-1){
                    arr[j]=arr[j-1];
                }
                else if(j==n-1){
                    arr[0]=t;
                }
            }
            n--;
            if(n==1){
                i=1;
            }
        }
        for(j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
    }
}