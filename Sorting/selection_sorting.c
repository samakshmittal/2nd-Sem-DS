#include <stdio.h>                               // Time Complexity
int main(){
    int n, i, j, min, t;                         // Constant
    printf("Enter max size of array");           // Constant
    scanf("%d", &n);                             // Constant
    int arr[n];                                  // Constant
    for(i=0; i<n; i++){                          // n+1 times                       entering data
        printf("Enter data");                    // n times                         print statement
        scanf("%d", &arr[i]);                    // n times                         scan statement
    }
    for (i=0; i<n; i++){                         // n+1 times                       n times loop will maintain
        min=i;                                   // n times
        for(j=i+1; j<n; j++){                    // n(n+1)/2 times                  number of times the loop will maintain itself
            if(arr[j]<arr[min]){                 // n times                         n comparisons
                min=j;                           // Constant
            }
        }
        t=arr[i];                                // n times                         swapping
        arr[i]=arr[min];                         // n times                         swapping
        arr[min]=t;                              // n times                         swapping
    }
    for(i=0; i<n; i++){                          // n+1 times                       printing sorted array
        printf("%d ", arr[i]);                   // n times                         print statement 
    }
    return 0;                                    // Constant
}