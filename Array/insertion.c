#include <stdio.h>
int main(){
    char A[9]={'B','C','D','E','G','H','I','J', 'K'};
    int i=8;
    printf("Before insertion : ");
    for (int j=0; j<9; j++){
        printf("%c ", A[j]);
    }
    while(i>=4){
        A[i+1]=A[i];
        i--;
    }
    printf("\nAfter insertion : ");
    A[4]='F';
    for (int j=0; j<9; j++){
        printf("%c ", A[j]);
    }
    return 0; 
}