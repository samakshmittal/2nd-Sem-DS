//Odd even search in array
#include <stdio.h>
int main(){
    int i, n, even, j, ev, odd, od, ran, ra;
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
    printf("How many even locations you want to update");
    scanf("%d", &even);                            //Enter number of even elements
    for(j=1; j<=even; j++){
        int z=0;
        while(z==0){
        printf("Enter even location");
        scanf("%d", &ev);                            //Enter location of even elements
        if(ev%2==0 && ev<n){
            printf("Enter new element");                       //Enter new elements
            scanf("%d", &a[ev]);
            printf("Element at location %d is %d\n", ev, a[ev]);
            printf("Array is : ");
            for(i=0; i<n; i++){                             //Print elements of array
                printf("%d ", a[i]);
            }
            printf("\n");
            z=1;
        }
        else{
            printf("Invlaid input\n");
            z=0;
        }
        }
    }
    printf("How many odd locations you want to update");
    scanf("%d", &odd);                            //Enter number of odd elements
    for(j=1; j<=odd; j++){
        int z=0;
        while(z==0){
        printf("Enter odd location");
        scanf("%d", &od);                            //Enter location of odd elements
        if(od%2!=0 && od<n){
            printf("Enter new element");                       //Enter new elements
            scanf("%d", &a[od]);
            printf("Element at location %d is %d\n", od, a[od]);
            for(i=0; i<n; i++){                             //Print elements of array
                printf("%d ", a[i]);
            }
            printf("\n");
            z=1;
        }
        else{
            printf("Invlaid input\n");
            z=0;
        }
        }
    }
    printf("How many locations you want to update");
    scanf("%d", &ran);                            //Enter number of odd elements
    for(j=1; j<=ran; j++){
        int z=0;
        while(z==0){
        printf("Enter location");
        scanf("%d", &ra);                            //Enter location of odd elements
        if(ra<n){
            printf("Enter new element");                       //Enter new elements
            scanf("%d", &a[ra]);
            printf("Element at location %d is %d\n", ra, a[ra]);
            for(i=0; i<n; i++){                             //Print elements of array
                printf("%d ", a[i]);
            }
            printf("\n");
            z=1;
        }
        else{
            printf("Invlaid input\n");
            z=0;
        }
        }
    }
}