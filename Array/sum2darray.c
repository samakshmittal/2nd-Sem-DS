#include <stdio.h>
int main(){
    int m, n;
    printf("Enter no or rows and column resp");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n], s[m][n];
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
    printf("Enter details of second array");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter the value of b[%d][%d]=",i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The value of array is ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", b[i][j]);
        }
    }
    printf("\n");
    printf("Sum fo 2 arrays ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", s[i][j]);
        }
    }
    return 0;
}