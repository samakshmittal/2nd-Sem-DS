#include <stdio.h>
int main(){
    int A[100], ch;
    int ub, j, n, loc, z=0;
    printf("Enter size of array");
    scanf("%d", &n);                               //Enter size of array
    printf("Enter elements in array\n");
    for (j=0; j<n; j++){                              //Entering elements in an array
        printf("Enter element A[%d]", j);
        scanf("%d ", &A[j]);
    }
    printf("\n");
    printf("Before deletion : ");
    for (j=0; j<n; j++){                              //Printing elements in an array before insertion
        printf("%d ", A[j]);
    }
    printf("\n");
    printf("Enter location from where element is to be deleted");        //Enter location from where element is to be deleted
    scanf("%d", &loc);                    //Enter location of element to be deleted
    ub=n-1;
    int temp=loc, i=ub;
    while(z==0)
    {
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