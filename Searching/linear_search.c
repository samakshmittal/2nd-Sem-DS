#include <stdio.h>
int main(){
    int n, i, data;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    printf("Enter data to be searched");
    scanf("%d", &data);
    i=0;
    while(i!=n){
        if(arr[i]!=data && i==n-1){
            printf("%d not found", data);
            i++;
        }
        else if(arr[i]!=data){
            i++;
        }
        else if(arr[i]==data){
            printf("%d found at location %d", data, i);
            break;
        }
    }
    return 0;
}