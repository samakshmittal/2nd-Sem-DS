#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
    char data;
    struct node *next;
};
char val;
struct node *top=NULL;
struct node *push(struct node *top, char val);
char pop(struct node *top);
int getpriority(char op);
void infixtopostfix(struct node *top, struct node *postfix);
struct node *display(struct node *top);
int main(){
    char infix[100];
    printf("\nEnter infix expression : ");
    gets(infix);
    struct node *infix1=NULL, *postfix;
    for(int i=strlen(infix)-1; i>=0; i--){
        infix1=push(infix1, infix[i]);
    }
    printf("Infix expression is : ");
    infix1=display(infix1);
    infixtopostfix(infix1, postfix);
    printf("\nPostfix expression is : ");
    postfix=display(postfix);
    return 0;
}
struct node *display(struct node *top){
    struct node *ptr;
    if (top==NULL){
        printf("Stack is empty");
    }
    else{
        ptr=top;
        while(ptr!=NULL){
            printf("%c ", ptr->data);
            ptr=ptr->next;
        }
    }
    return top;
}
struct node *push(struct node *top, char val){
    struct node *new;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        new->data=val;
        if(top==NULL){
            top=new;
            new->next=NULL;
        }
        else{
            new->next=top;
            top=new;
        }
    }
    return top;
}
char pop(struct node *top){
    struct node *ptr;
    if(top==NULL){
        printf("Underflow");
    }
    else{
        ptr=top;
        top=top->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int getpriority(char op){
    if(op=='*' || op=='/' || op=='%'){
        return 1;
    }
    else if(op=='+' || op=='-'){
        return 0;
    }
}
void infixtopostfix(struct node *top, struct node *postfix){
    char temp;
    struct node *stack;
    while(top->data!='\0'){
        if(top->data=='('){
            push(stack, top->data);
            top=top->next;
        }
        else if(top->data==')'){
            while((top->data!=-1) && (top->data!='(')){
                push(postfix, pop(stack));
            }
            if(top==NULL){
                printf("Incorrect expression");
                exit(1);
            }
            temp=pop(stack);
            top=top->next;
        }
        else if((top->data>='0' && top->data<='9') || (top->data>='A' && top->data<='Z') || (top->data>='a' && top->data<='z')){
            push(postfix, top->data);
            top=top->next;
        }
        else if(top->data=='+' || top->data=='-' || top->data=='*' || top->data=='/' || top->data=='%'){
            while((top!=NULL) && (top->data!='(') && (getpriority(stack->data)>getpriority(top->data))){
                push(postfix, pop(stack));
            }
            push(stack, top->data);
            top=top->next;
        }
        else{
            printf("Incorrect element in expression");
            exit(1);
        }
    }
    while((top!=NULL) && (stack->data!='(')){
        push(postfix, pop(stack));
    }
    push(postfix, '\0');
    postfix=display(postfix);
}