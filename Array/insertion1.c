#include <stdio.h>
int main(){
    int ub, i, j, n, loc, z=0;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    int A[n], ch;
    printf("Enter elements in array\n");
    for (j=0; j<n; j++){                              //Entering elements in an array
        printf("Enter element A[%d]", j);
        scanf("%d ", &A[j]);
    }
    printf("\n");
    printf("Before insertion : ");
    for (j=0; j<n; j++){                              //Printing elements in an array before insertion
        printf("%d ", A[j]);
    }
    printf("\n");
    printf("Enter location where element is to be inserted");        //Enter location where element is to be inserted
    scanf("%d", &loc);                    //Enter location of new element
    i=n-1;
    ub=i;
    while(z==0)
    {
        if(loc<n)
        {
            printf("Enter element to be inserted");
            scanf("%d", &ch);                        //Enter element to be inserted
            while(ub>=loc){                          //Making space for element
                A[ub+1]=A[ub];
                ub--;
            }
            printf("\nAfter insertion : ");
            A[loc-1]=ch;                             //Inserting element
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