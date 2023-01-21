//Greatest one number
#include <stdio.h>
int main(){
    int i, n, j, inte, loc, y=0;
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
            printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        int z=0;                                    //rejecting small values
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
            loc=i;
            inte=a[i];                
        } 
    }
    if(y!=2){
        while((n-1)>=loc){
            a[loc]=a[loc+1];                      //deleting greatest value
            loc++;
        }
        n--;
        printf("After deleting greatest number\nArray is :");
        for(i=0; i<n; i++){                             //Print elements of array
                printf("%d ", a[i]);
        }
    }
    return 0;
}