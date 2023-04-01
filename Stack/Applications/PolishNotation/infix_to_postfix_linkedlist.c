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
struct node *display(struct node *top);
int main(){
    char infix[100], postfix[100];
    printf("\nEnter infix expression : ");
    gets(infix);
    struct node *infix1=NULL;
    for(int i=0; i<strlen(infix); i++){
        infix1=push(infix1, infix[i]);
    }
    infix1=display(infix1);
    printf("%c", pop(infix1));
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
                postfix=postfix->next;
            }
        }
    }
}