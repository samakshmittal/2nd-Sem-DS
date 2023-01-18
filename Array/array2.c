#include <stdio.h>
int main(){
    int a[10];
    for(int i=1; i<=10; i++){
            printf("Enter the value of a[%d]=",i);
            scanf("%d", &a[i]);
    }
    for(int i=0; i<=10; i++){
            printf("Value of a[%d]=%d\n",i, a[i]);
    }
    return 0;
}