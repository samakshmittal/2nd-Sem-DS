#include <stdio.h>
int partition(int arr[], int beg, int end);
void quicksort(int arr[], int beg, int end);
int main(){
    int n, i, j, t;
    printf("Enter max size of array");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter data");
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n-1);
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
int partition(int arr[], int beg, int end){
    int left=beg, right=end, loc=beg, flag=0, t;
    while(flag==0){
        while(arr[loc]<=arr[right] && loc!=right){
            right--;
        }
        if(loc==right){
            flag=1;
        }
        else if(arr[loc]>arr[right]){
            t=arr[loc];
            arr[loc]=arr[right];
            arr[right]=t;
            loc=right;
        }
        if(flag==0){
            while(arr[loc]>=arr[left] && loc!=left){
                left++;
            }
            if(loc==left){
                flag=1;
            }
            else if(arr[loc]<arr[left]){
                t=arr[loc];
                arr[loc]=arr[left];
                arr[left]=t;
                loc=left;
            }
        }
    }
    return loc;
}
void quicksort(int arr[], int beg, int end){
    int loc;
    if(beg<end){
        loc=partition(arr, beg, end);
        quicksort(arr, beg, loc-1);
        quicksort(arr, loc+1, end);
    }
}