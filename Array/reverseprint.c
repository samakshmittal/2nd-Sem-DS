#include <stdio.h>
void reverse(int a[], int n){
    for(int i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
}
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
    reverse(a, n);
    return 0;
}