#include <stdio.h>
int main(){
    int n, i, j;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}