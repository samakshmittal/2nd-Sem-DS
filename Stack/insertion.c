#include <stdio.h>
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
    }
}
void display(int stack[]){
    int i=0;
    while(stack[i]!='\0'){
        printf("%d ", stack[i]);
        i++;
    }
}