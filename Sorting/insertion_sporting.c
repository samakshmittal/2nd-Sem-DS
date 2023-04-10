#include <stdio.h>
int main(){
    int n, i, j, t;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    for(i=1; i<n; i++){
        t=arr[i];
        j=i-1;
        while(t<=arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}