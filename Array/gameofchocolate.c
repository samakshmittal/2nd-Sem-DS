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
        
        x=arr[0];
        for(j=0; j<n; j++){
            if(arr[j]<x){
                x=arr[j];
            }
        }
        printf("%d\n", x*(n-1));
    }
}