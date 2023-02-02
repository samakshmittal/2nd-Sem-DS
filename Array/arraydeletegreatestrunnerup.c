//Greatest runner ups
#include <stdio.h>
int main(){
    int x, b, c, d, i, j, n;
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
        int z=0;                                    //rejecting small values
        for(j=0; j<n; j++){
            if(i!=j){
                if(a[i]<a[j]){
                    z=1;
                }
            }    
        }
        if(z==0){
            x=i; 
            break;                //printing greatest value
        }
    }
    for(i=0; i<n; i++){
    int z=0;                                    //rejecting small values
        if(i!=x){
            for(j=0; j<n; j++){
                if(i!=j && j!=x){
                    if(a[i]<a[j]){
                        z=1;
                    }
                }    
            }
            if(z==0){
                printf("1st runner up = %d\n", a[i]);
                b=i;
                break;                //printing 1st runner up
            }
        } 
    }
    if(b<x){
        x--;
    }
    while(n>b){                       //Deleting 1st greatest runner up
        a[b]=a[b+1];
        b++;
    }
    n--;
    for(i=0; i<n; i++){
    int z=0;                                    //rejecting small values
        if(i!=x && i!=b){
            for(j=0; j<n; j++){
                if(i!=j && j!=x){
                    if(a[i]<a[j]){
                        z=1;
                    }
                }    
            }
            if(z==0){
                printf("2nd runner up = %d\n", a[i]);
                c=i;
                break;                //printing 2nd runner up
            }
        } 
    }
    if(c<x){
        x--;
    }
    while(n>c){                       //Deleting 2nd greatest runner up
        a[c]=a[c+1];
        c++;
    }
    n--;
    for(i=0; i<n; i++){
    int z=0;                                    //rejecting small values
        if(i!=x && i!=b && i!=c){
            for(j=0; j<n; j++){
                if(i!=j && j!=x){
                    if(a[i]<a[j]){
                        z=1;
                    }
                }    
            }
            if(z==0){
                printf("3rd runner up = %d\n", a[i]);
                d=i;
                break;                //printing 3rd runner up
            }
        } 
    }
    if(d<x){
        x--;
    }
    while(n>d){                       //Deleting 3rd greatest runner up
        a[d]=a[d+1];
        d++;
    }
    n--;
    printf("Array after deletion 3 greatest runner ups");
    for(i=0; i<n; i++){                             //Print elements of array
        printf("Value of a[%d]=%d\n",i, a[i]);
    }
    return 0;
}