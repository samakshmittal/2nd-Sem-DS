#include <stdio.h>
int main(){
    int m, n, o, p;
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
    printf("Enter no or rows and column resp of 1st array");
    scanf("%d%d", &o, &p);
    int b[o][p], mul[m][p];
    printf("Enter details of second array");
    if(n==o){
        for(int i=0; i<o; i++){
            for(int j=0; j<p; j++){
                printf("Enter the value of b[%d][%d]=",i, j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("The value of array is ");
        for(int i=0; i<o; i++){
            for(int j=0; j<p; j++){
                printf("%d ", b[i][j]);
            }
        }
        printf("\n");
        printf("Multiplication of 2 arrays ");
        for(int i=0; i<m; i++){
            for(int j=0; j<p; j++){
                mul[i][j]=0;
                for(int l=0; l<n; l++){
                    mul[i][j]+=a[i][l]*b[l][j];
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<p; j++){
                printf("%d ", mul[i][j]);
            }
        }
    }
    else{
        printf("Multiplication can't be done");
    }
    return 0;
}