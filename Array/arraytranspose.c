#include <stdio.h>
int main(){
    int m, n;
    printf("Enter no or rows and column resp of 1st array");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter details of first array");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter the value of a[%d][%d]=",i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The value of array is ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");
    printf("Transpose of given array ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}