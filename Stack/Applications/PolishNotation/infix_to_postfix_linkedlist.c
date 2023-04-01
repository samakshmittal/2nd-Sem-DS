#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
    char data;
    struct node *next;
};
char val;
struct node *top=NULL, *head, *postfix=NULL;
struct node *insert(struct node *top, char val);
char pop(struct node *top);
struct node *pop1(struct node *top);
struct node *push(struct node *top, char val);
int getpriority(char op);
void infixtopostfix(struct node *top, struct node *postfix);
struct node *display(struct node *top);
int main(){
    char infix[100];
    printf("\nEnter infix expression : ");
    gets(infix);
    struct node *infix1=NULL, *postfix1=NULL;
    for(int i=0; i<strlen(infix); i++){
        infix1=insert(infix1, infix[i]);
    }
    printf("Infix expression is : ");
    infix1=display(infix1);
    infixtopostfix(infix1, postfix1);
    printf("\nPostfix expression is : ");
    postfix1=display(postfix1);
    return 0;
}
struct node *display(struct node *head){
    struct node *ptr;
    if (head==NULL){
        printf("\nStack is empty");
    }
    else{
        ptr=head;
        while(ptr!=NULL){
            printf("%c ", ptr->data);
            ptr=ptr->next;
        }
    }
    return head;
}
struct node *insert(struct node *head, char val){
    struct node *ptr, *preptr;
    ptr=malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overflow");
    }
    else{
        ptr->data=val;
        ptr->next=NULL;
        if(head==NULL){
            head=ptr;
            preptr=ptr;
        }
        else{
            preptr->next=ptr;
            preptr=ptr;
        }
    }
    return head;
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
        val=ptr->data;
    }
    return val;
}
struct node *pop1(struct node *top){
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
    return top;
}
int getpriority(char op){
    if(op=='*' || op=='/' || op=='%'){
        return 1;
    }
    else if(op=='+' || op=='-'){
        return 0;
    }
}
void infixtopostfix(struct node *infix, struct node *postfix){
    char temp;
    struct node *stack;
    while(infix!=NULL){
        printf("\nabc");
        if(infix->data=='('){
            stack=push(stack, infix->data);
            infix=infix->next;
            printf("\nabcd");
        }
        else if(infix->data==')'){
            while((infix!=NULL) && (stack->data!='(')){
                postfix=insert(postfix, pop(stack));
                stack=pop1(stack);
                printf("\nabcde");
            }
            printf("\n123");
            if(infix==NULL){
                printf("\nIncorrect expression");
                exit(1);
            }
            printf("\nabcdefg");
            stack=pop1(stack);
            infix=infix->next;
            
        }
        else if((infix->data>='0' && infix->data<='9') || (infix->data>='A' && infix->data<='Z') || (infix->data>='a' && infix->data<='z')){
            printf("\n%c\n", infix->data);
            postfix=insert(postfix, infix->data);
            infix=infix->next;
            printf("\nabcdefgh");
        }
        else if(infix->data=='+' || infix->data=='-' || infix->data=='*' || infix->data=='/' || infix->data=='%'){
            
            while((infix!=NULL) && (infix->data!='(') && (getpriority(stack->data)>getpriority(infix->data))){
                postfix=insert(postfix, pop(stack));
                stack=pop1(stack);  
            }
            printf("\nabca");
            stack=push(stack, infix->data);
            infix=infix->next;
            
        }
        else{
            printf("Incorrect element in expression");
            exit(1);
        }
    }
    while((infix!=NULL) && (stack->data!='(')){
        postfix=insert(postfix, pop(stack));
        stack=pop1(stack);
    }
    postfix=display(postfix);
}