#include <stdio.h>
int main(){
    int ub, j, n, loc, z=0;
    char A[n], ch;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    printf("Enter elements in array\n");
    for (j=0; j<n; j++){                              //Entering elements in an array
        printf("Enter element A[%d]", j);
        scanf("%c ", &A[j]);
    }
    printf("\n");
    printf("Before insertion : ");
    for (j=0; j<n; j++){                              //Printing elements in an array before insertion
        printf("%c ", A[j]);
    }
    printf("\n");
    printf("Enter location where element is to be inserted");        //Enter location where element is to be inserted
    scanf("%d", &loc);                    //Enter location of new element
    ub=n-1;
    while(z==0)
    {
        if(loc<n)
        {
            printf("Enter element to be inserted");
            scanf("%c", &ch);                        //Enter element to be inserted
            while(ub>=loc){                          //Making space for element
                A[ub+1]=A[ub];
                ub--;
            }
            printf("\nAfter insertion : ");
            A[loc-1]=ch;                             //Inserting element
            for (int j=0; j<n; j++){                 //Printing array after insertion
                printf("%c ", A[j]);
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