#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL, *new, *ptr, *preptr;
int value;
struct node *push(struct node *);
struct node *delete(struct node *);
struct node *pop(struct node *);
struct node *display(struct node *);
int main(){
    int choice;
    do
    {
        printf("\n MAIN MENU");
        printf("\n 1. Push");
        printf("\n 2. Deletion from beginning");
        printf("\n 3. Pop");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            head=push(head);
            break;
            case 2:
            head=delete(head);
            break;
            case 3:
            head=pop(head);
            break;
            case 4:
            head=display(head);
            break;
        }
        }while(choice!=5);
    return 0;
}
struct node *push(struct node *head){
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        ptr=head;
        printf("Enter data");
        scanf("%d", &new->data);
        if(head==NULL){
            head=new;
            new->next=NULL;
        }
        else{
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new;
            new->next=NULL;
        }
    }
    return head;
}
struct node *display(struct node *head){
    if(head==NULL){
        printf("Linkedlist is empty");
    }
    else{
        ptr=head;
        while(ptr!=NULL){
            printf("%d ", ptr->data);
            ptr=ptr->next;
        }
    }
    return head;
}
struct node *delete(struct node *head){
    if(head==NULL){
        printf("Underflow");
    }
    else{
        ptr=head;
        head=ptr->next;
        printf("Value deleted is %d", ptr->data);
        free(ptr);
        return head;
    }
    return head;
}
struct node *pop(struct node *head){
    if(head==NULL){
        printf("Underflow");
    }
    else if(head->next==NULL){
        ptr=head;
        head=ptr->next;
        printf("Value deleted is %d", ptr->data);
        free(ptr);
        return head;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            preptr=ptr;
            ptr=ptr->next;
        }
        printf("Value deleted is %d", ptr->data);
        preptr->next=NULL;
        free(ptr);
    }
    return head;
}