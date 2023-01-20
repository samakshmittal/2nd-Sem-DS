#include <stdio.h>
int main(){
    char A[9]={'B','C','D','E','G','H','I','J', 'K'};
    int i=8;
    printf("Before deletion : ");
    for (int j=0; j<9; j++){
        printf("%c ", A[j]);
    }
    while(i>4){
        A[i]=A[i+1];
        i++;
    }
    printf("\nAfter deletion : ");
    for (int j=0; j<9; j++){
        printf("%c ", A[j]);
    }
    return 0;
}