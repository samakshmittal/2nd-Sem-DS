#include <stdio.h>
int main(){
    int n, i, j, min, t;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}