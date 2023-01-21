//Odd even search in array
#include <stdio.h>
int main(){
    int i, n, even, j, ev, odd, od, ran, ra, y=0, ab, yn;
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
    while(y==0){
        printf("Which location you want to update : even (1) or odd(2) or mixed(3)");
        scanf("%d", &ab);
        if(ab==1){
            int m=0, rep=0;
            while(rep==0){
                printf("How many even locations you want to update");
                scanf("%d", &even);                            //Enter number of even elements
                if(even<=(n/2)){
                    for(j=1; j<=even; j++){
                        int z=0;
                        while(z==0){
                        printf("Enter even location");
                        scanf("%d", &ev);                            //Enter location of even elements
                        if(ev%2==0 && ev<n){
                            while((n-1)>=ev){               //Deleting element
                                a[ev]=a[ev+1];
                                ev++;
                            }
                            n--;
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
                    while(m==0){
                        printf("Do you want to do other updation also : Y(1) or N(0)");      //Asking for further updation
                        scanf("%d", &yn);
                        if(yn==1){
                            y=0;
                            m=1;
                        }
                        else if(yn==0){
                            y=1;
                            m=1;
                        }
                        else{
                            printf("Invalid input\n");
                            m=0;
                        }
                    }
                    rep=1;
                }
                else{
                    printf("Invalid input\n");
                    rep=0;
                }
            }
        }
        else if(ab==2){
            int m=0, rep=0;
            while(rep==0){
                printf("How many odd locations you want to update");
                scanf("%d", &odd);                            //Enter number of odd elements
                if(odd<=n/2){
                    for(j=1; j<=odd; j++){
                        int z=0;
                        while(z==0){
                        printf("Enter odd location");
                        scanf("%d", &od);                            //Enter location of odd elements
                        if(od%2!=0 && od<n){
                            while((n-1)>=od){               //Deleting element
                                a[od]=a[od+1];
                                od++;
                            }
                            n--;
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
                    while(m==0){
                        printf("Do you want to do other updation also : Y(1) or N(0)");         //Asking for further updation
                        scanf("%d", &yn);
                        if(yn==1){
                            y=0;
                            m=1;
                        }
                        else if(yn==0){
                            y=1;
                            m=1;
                        }
                        else{
                            printf("Invalid input\n");
                            m=0;
                        }
                    }
                    rep=1;
                }
                else{
                    printf("Invalid input\n");
                    rep=0;
                }
            }
        }
        else if(ab==3){
            int m=0, rep=0;
            while(rep==0){
                printf("How many locations you want to update");
                scanf("%d", &ran);                            //Enter number of elements
                if(ran<=n/2){
                    for(j=1; j<=ran; j++){
                        int z=0;
                        while(z==0){
                        printf("Enter location");
                        scanf("%d", &ra);                            //Enter location of elements
                        if(ra<n){
                            while((n-1)>=ra){               //Deleting element
                                a[ra]=a[ra+1];
                                ra++;
                            }
                            n--;
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
                    while(m==0){
                        printf("Do you want to do other updation also : Y(1) or N(0)");         //Asking for further updation
                        scanf("%d", &yn);
                        if(yn==1){
                            y=0;
                            m=1;
                        }
                        else if(yn==0){
                            y=1;
                            m=1;
                        }
                        else{
                            printf("Invalid input\n");
                            m=0;
                        }
                    }
                    rep=1;
                }
                else{
                    printf("Invalid input\n");
                    rep=0;
                }
            }
        }
        else{
            printf("Invalid input\n");         //Asking for correct input after wrong input
            y=0;
        }
    }
    return 0;
}