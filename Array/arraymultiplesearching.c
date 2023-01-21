//Multiple searching in an array
#include <stdio.h>
int main(){
    int i, j, n, no, item;
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
            printf("Value of a[%d]=%d\n",i, a[i]);
    }
    printf("Enter number of elements to be searched");
    scanf("%d", &no);                                                   //Enter number of elements to be searched
    for(j=1; j<=no; j++){
        printf("Enter element to be searched");
        scanf("%d", &item);                                           //Elements searching
        for(i=0; i<=(n-1); i++){
            if(a[i]==item){
                printf("Successful at location %d\n", i);
                break;
            }
        }
        if(i==n){
            printf("Search unsuccessful\n");
        }
    }
}