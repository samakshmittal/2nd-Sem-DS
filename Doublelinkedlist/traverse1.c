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
    printf("Enter -1 to stop");
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
        scanf("%d", &num);
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d", ptr->data);
        ptr=ptr->next;
    }
    return start;
}
int main(){
    start=create(start);
    printf("aaa");
    start=display(start);
    return 0;
}