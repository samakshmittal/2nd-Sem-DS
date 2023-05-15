#include<stdio.h>
int main(){
    int n, a;
    scanf("%d%d",&n, &a);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=a; i++){
        int t=arr[0];
        for(int j=0;j<n;j++){
            if(j!=n-1){
                arr[j]=arr[j+1];
            }
                else if(j==n-1){
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}