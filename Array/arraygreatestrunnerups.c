//Greatest runner ups
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
            printf("Value of a[%d]=%d\n",i, a[i]);
    }
    for(i=0; i<n; i++){
        int z=0, y=0;                                    //rejecting small values
        for(j=0; j<n; j++){
            if(i!=j){
                if(a[i]<a[j]){
                    z=1;
                }
            }    
        }
        if(z==0){
            for(j=0; j<n; j++){
            if(i!=j){                                //rejecting similar greatest values
                if(a[i]==a[j]){
                    y=2;
                }
            }    
        }
        }
        if(y==2){
            printf("Invalid input");
            break;
        }
        else if(z==0){
            printf("%d is greatest", a[i]);                 //printing greatest value
        } 
    }
    return 0;
}