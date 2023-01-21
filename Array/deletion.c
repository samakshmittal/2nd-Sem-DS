#include <stdio.h>
int main(){
    int ub, j, n, loc, z=0;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    int A[n];
    printf("Enter elements in array\n");                    //Enter elements in array
    for(j=0; j<n; j++){
            printf("Enter the value of a[%d]=",j);
            scanf("%d", &A[j]);
    }
    printf("\n");
    printf("Array is : ");
    for(j=0; j<n; j++){                             //Print elements of array
            printf("Value of a[%d]=%d\n",j, A[j]);
    }
    printf("\n");
    ub=n-1;
    int temp=loc, i=ub;
    while(z==0)
    {
        printf("Enter location from where element is to be deleted");        //Enter location from where element is to be deleted
        scanf("%d", &loc);                    //Enter location of element to be deleted
        if(loc<n)
        {
            while(i>=temp){                          //Removing space
                A[temp]=A[temp+1];
                temp++;
            }
            n--;
            printf("\nAfter deletion : ");
            for (int j=0; j<n; j++){                 //Printing array after deletion
                printf("%d ", A[j]);
            }
            z=1;
        }
        else{
            printf("Wrong input, Try again\n");
            z=0;
        }
    }
    return 0; 
}