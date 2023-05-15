#include <stdio.h>
#define max 10
void merge(int arr[], int beg, int mid, int end);
void sort(int arr[], int beg, int end);
int main(){
    int n, i;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    sort(arr, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void merge(int arr[], int beg, int mid, int end){
    int i=beg, j=mid+1, x=beg, temp[max], k;
    while((i<=mid) && (j<=end)){
        if(arr[i]<arr[j]){
            temp[x]=arr[i];
            i++;
        }
        else{
            temp[x]=arr[j];
            j++;
        }
        x++;
    }
    if(i>mid){
        while(j<=end){
            temp[x]=arr[j];
            j++;
            x++;
        }
    }
    else{
        while(i<=mid){
            temp[x]=arr[i];
            i++;
            x++;
        }
    }
    for(k=beg; k<x; k++){
        arr[k]=temp[k];
    }
}
void sort(int arr[], int beg, int end){
    int mid;
    if(beg<end){
        mid=(beg+end)/2;
        sort(arr, beg, mid);
        sort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}