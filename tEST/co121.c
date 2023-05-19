#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *start){
    int arr[4]={10,5,16,32};
    struct node *ptr, *preptr;
    for(int i=0; i<4; i++){
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("Overflow");
        }
        else{
            ptr->data=arr[i];
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL){
                start=ptr;
                preptr=ptr;
            }
            else{
                preptr->next=ptr;
                ptr->prev=preptr;
                preptr=ptr;
            }
        }
    }
    return start;
}
struct node *display(struct node *start){
    struct node *temp=start;
    while (temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    return start;
}
struct node *insertbegin(struct node *start){
    struct node *new;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        new->prev=NULL;
        new->next=start;
        new->data=57;
        start=new;
        return start;
    }
}
struct node *insertmid(struct node *start){
    struct node *new, *ptr, *preptr;
    ptr=start;
    int arr[3]={87, 97, 54};
    preptr=ptr;
    for(int i=0; i<3; i++){
        new=malloc(sizeof(struct node));
        if(new==NULL){
            printf("Overflow");
        }
        else{
            new->data=arr[i];
            new->prev=preptr;
            ptr=ptr->next;
            preptr->next=new;
            ptr->prev=new;
            new->next=ptr;
            ptr=new;
            preptr=ptr;
        }
    }
    return start;
}
int main(){
    start=create(start);
    start=insertbegin(start);
    start=insertmid(start);
    start=display(start);
    return 0;
}