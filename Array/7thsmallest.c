//Smallest 7th number
#include <stdio.h>
int smallest(int arr[], int n, int x);
int main(){
    int i, n, j;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    int a[n];
    printf("Enter elements in array\n");                    //Enter elements in array
    for(i=0; i<n; i++){
            printf("Enter the value of a[%d]=",i);
            scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Array is : ");
    for(i=0; i<n; i++){                             //Print elements of array
            printf("%d ", a[i]);
    }
    printf("\n");
    printf("smallest=", smallest(a, n, 1));
    return 0;
}
int smallest(int arr[], int n, int x){
    int b=arr[0];
    for(int i=0; i<n; i++){
        if(b<arr[i]){
            b=arr[i];
        }
    }
    if(x==1){
        return b;
    }
    else{
        b=smallest(arr, n, x-1);
        return b;
    }
}