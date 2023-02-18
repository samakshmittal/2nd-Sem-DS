#include <stdio.h>
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
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i]==0 && a[j]==1){
                int t=a[i];
                a[i]=a[j];
                a[j]=a[i];
                break;
            }
        }
    }
    printf("\n");
    printf("Array is : ");
    for(i=0; i<n; i++){                             //Print elements of array
            printf("%d ", a[i]);
    }
}