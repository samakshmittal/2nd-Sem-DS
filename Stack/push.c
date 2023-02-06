#include <stdio.h>
int top=-1;
void enter(int stack[], int e);
void display(int stack[]);
void push(int stack[], int n);
int pop(int stack[], int n);
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
    push(stack, n);
    display(stack);
    pop(stack,n);
    display(stack);
    return 0;
}
void enter(int stack[], int e){
    int i=0;
    printf("\nEnter values in array\n");
    for(i=0; i<e; i++){
        scanf("%d", &stack[i]);
        top++;
    }
}
void display(int stack[]){
    int i;
    printf("\n");
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(i=top; i>=0; i--){
            printf("%d ", stack[i]);
        }
    }
}
void push(int stack[], int n){
    int val;
    if (top==n-1){
        printf("\nOverflow\n");
    }
    else{
        printf("\nEnter value to be pushed");
        scanf("%d", &val);
        top++;
        stack[top]=val;
    }
}
int pop(int stack[], int n){
    if (top==-1){
        printf("\nUnderflow\n");
    }
    else{
        top--;
    }
}