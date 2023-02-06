#include <stdio.h>
int top=-1;
void enter(int stack[], int e);
void display(int stack[]);
int main(){
    int n, e;
    printf("Enter size of array");
    scanf("%d", &n);
    int stack[n];
    printf("Enter number of elements in array");
    scanf("%d", &e);
    if(e<=n){
        enter(stack, e);
    }
    display(stack);
    return 0;
}
void enter(int stack[], int e){
    int i=0;
    printf("Enter values in array");
    for(i=0; i<e; i++){
        scanf("%d", &stack[i]);
        top++;
    }
}
void display(int stack[]){
    int i;
    if(top==-1){
        printf("\nStack is empty\n");
    }
    else{
        for(i=top; i>=0; i--){
            printf("%d ", stack[i]);
        }
    }
}