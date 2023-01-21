#include <stdio.h>
int main(){
    int ub, i, j, n, loc, z=0;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    int A[n], ch;
    printf("Enter elements in array\n");                    //Enter elements in array
    for(i=0; i<n; i++){
            printf("Enter the value of a[%d]=",i);
            scanf("%d", &A[i]);
    }
    printf("\n");
    printf("Array is : ");
    for(i=0; i<n; i++){                             //Print elements of array
            printf("Value of a[%d]=%d\n",i, A[i]);
    }
    printf("\n");
    i=n-1;
    ub=i;
    while(z==0)
    {
        printf("Enter location where element is to be inserted");        //Enter location where element is to be inserted
        scanf("%d", &loc);                    //Enter location of new element
        if(loc<n)
        {
            printf("Enter element to be inserted");
            scanf("%d", &ch);                        //Enter element to be inserted
            while(ub>=loc){                          //Making space for element
                A[ub+1]=A[ub];
                ub--;
            }
            printf("\nAfter insertion : ");
            A[loc]=ch;                             //Inserting element
            for (int j=0; j<n; j++){                 //Printing array after insertion
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