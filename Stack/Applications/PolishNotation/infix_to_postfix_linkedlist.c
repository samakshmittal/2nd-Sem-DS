#include <stdio.h>
#include <string.h>
struct node {
    char data;
    struct node *next;
};
struct node *top=NULL;
char str[];
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
struct node *pop(struct node *top){
    int val;
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