#include <stdio.h>
int main(){
    char A[9]={'B','C','D','E','G','H','I','J', 'K'}, item='n';
    int ub=8, lb=0, z=0;
    for (int j=0; j<9; j++){
        printf("%c ", A[j]);
    }
    printf("\n");
    for(int i=0; i<=ub; i++){
        if(A[i]==item){
            printf("Successful");
            z=1;
            break;
        }
    }
    if(z==0){
        printf("Search unsuccessful");
    }
    return 0; 
}