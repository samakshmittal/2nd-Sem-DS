#include <stdio.h>
int main(){
    int a[10];
    for(int i=0; i<10; i++){
            printf("Enter the value of a[%d]=",i);
            scanf("%d", &a[i]);
    }
    
    printf("The value of array is");
    for(int i=0; i<10; i++){
            printf("%d\n", a[i]);
    }
    return 0;
}