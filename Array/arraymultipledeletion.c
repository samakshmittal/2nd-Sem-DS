//Deletion of multiple elements in array
#include <stdio.h>
int main(){
    int i, j, n, no, loc;
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
    printf("Enter number of elements to be deleted");
    scanf("%d", &no);                                                  //Enter number of elements to be deleted
    
    for(j=1; j<=no; j++){
        int z=0;
        while(z==0){
            printf("Enter location of element to be deleted");
            scanf("%d", &loc);
            if(loc<n){                                         //Elements searching
            while((n-1)>=loc){                          //Making space for element
                    a[loc]=a[loc+1];
                    loc++;
                }
                n--;
                printf("\nAfter deletion : "); 
                for (int j=0; j<n; j++){                 //Printing array after deletion
                    printf("%d ", a[j]);
                }
                printf("\n");
                z=1;
            }
            else{
                printf("Invalid location\n");
                z=0;
            }
        }
    }
    return 0;
}