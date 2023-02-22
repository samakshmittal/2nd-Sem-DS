#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;    
};
struct node *start=NULL;
struct node *create(struct node *start){
    struct node *new, *ptr, *preptr;
    int num=0;
    while(num!=-1){
        new=malloc(sizeof(struct node));
        new->prev=NULL;
        new->next=NULL;
        printf("Enter data");
        scanf("%d", &new->data);
        if(start==NULL){
            start=new;
            preptr=new;
        }
        else{
            preptr->next=new;
            new->prev=preptr;
            preptr=new;
        }
        printf("Enter -1 to stop");
        scanf("%d", &num);
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d\n", ptr->prev);
        printf("%d\n", ptr->data);
        printf("%d\n", ptr->next);
        ptr=ptr->next;
    }
    return start;
}
int main(){
    start=create(start);
    start=display(start);
    return 0;
}