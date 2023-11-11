#include <stdio.h>                               // Time Complexity
int main(){
    int n, i, data;                              // Constant
    printf("Enter max size of array");           // Constant
    scanf("%d", &n);                             // Constant                        enter size of array
    int arr[n];                                  // Constant
    for(i=0; i<n; i++){                          // n+1 times                       entering data
        printf("Enter data");                    // n times                         print statement
        scanf("%d", &arr[i]);                    // n times                         scan statement
    }
    printf("Enter data to be searched");         // Constant
    scanf("%d", &data);                          // Constant
    i=0;                                         // Constant
    while(i!=n){                                 // Max n+1 times
        if(arr[i]!=data && i==n-1){              // Max n comparisons               checking the data to be searched is the data at last position or not
            printf("%d not found", data);        // Constant
            i++;                                 // Constant
        }
        else if(arr[i]!=data){                   // Max n comparisons               checking the data to be searched is the data iterated over or not
            i++;                                 // Constant
        }
        else if(arr[i]==data){                   // Max n comparisons               checking the data to be searched is the data iterated over or not
            printf("%d found at location %d", data, i); // Constant
            break;                               // Constant
        }
    }
    return 0;                                    // Constant
}