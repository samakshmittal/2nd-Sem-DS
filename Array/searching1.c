#include <stdio.h>
int main(){
    int i, n;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    char a[n];
    printf("Enter elements in array\n");
    for(i=1; i<n; i++){
            printf("Enter the value of a[%d]=",i);
            scanf("%c", &a[i]);
    }
    printf("\n");
    printf("Array is : ");
    for(i=0; i<n; i++){
            printf("Value of a[%d]=%c\n",i, a[i]);
    }

}