#include <stdio.h>
int top=-1, value;
void display(int stack[]);
void push(int stack[], int n);
int pop(int stack[]);
int main(){
    int n, ch;
    printf("Enter size of array");
    scanf("%d", &n);
    int stack[n];
    do{
        printf("\nWhat do you want to do:\n1 for push\n2 for pop\n3 for display\n4 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            push(stack, n);
            break;
            case 2:
            value=pop(stack);
            if(value!=-1){
                printf("%d\n", value);
            }
            else if(value==-1){
                if(top!=-1){
                    printf("%d", value);
                }
            }
            break;
            case 3:
            display(stack);
            break;
        }
    }while(ch!=4);
    return 0;
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
    printf("\n");
}
void push(int stack[], int n){
    if (top==n-1){
        printf("\nOverflow\n");
    }
    else{
        top++;
        printf("\nEnter value to be pushed");
        scanf("%d", &stack[top]);
    }
}
int pop(int stack[]){
    if (top==-1){
        printf("\nUnderflow\n");
        return top;
    }
    else{
        value=stack[top];
        top--;
        return value;
    }
}