#include <stdio.h>
#include <string.h>
struct node {
    char data;
    struct node *next;
};
struct node *top=NULL, *new;
char str[];
char x;
void enter(char str[]){
    printf("Enter expression");
    gets(str);
}
struct node *push(struct node *top){
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        new->data=x;
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
struct node *pop(struct node *top){
    struct node *ptr;
    if(top==NULL){
        printf("Underflow");
    }
    else{
        ptr=top;
        top=top->next;
        printf("Value deleted is %d", ptr->data);
        free(ptr);
    }
    return top;
}