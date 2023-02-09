#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insertbeg(struct node *);
struct node *insertend(struct node *);
struct node *insertbefore(struct node *);
struct node *insertafter(struct node *);
int main(){
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Add a node before a given node");
        printf("\n 6: Add a node after a given node");
        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");
        printf("\n 9: Delete a given node");
        printf("\n 10: Delete a node after a given node");
        printf("\n 11: Delete the entire list");
        printf("\n 12: Sort the list");
        printf("\n 13: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
        case 1: 
        head = create(head);
        printf("\n LINKED LIST CREATED");
        break;
        case 2: 
        head = display(head);
        break;
        case 3:
        head = insertbeg(head);
        break;
        case 4:
        head = insertend(head);
        break;
        case 5:
        head = insertbefore(head);
        break;
        }
    }while(option!=13);
}
struct node *create(struct node *head){
    int n, i;
    printf("Enter maximum number of elements allowed in linkedlist");
    scanf("%d", &n);
    struct node *prev, *p;
    for(i=0; i<n; i++){
        p=malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next=NULL;
        if(i==0){
            head=p;
            prev=p;
        }
        else{
            prev->next=p;
            prev=p;
        }
    }
    return head;
}
struct node *display(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
    return head;
}
struct node *insertbeg(struct node *head){
    struct node *new, *avail;
    avail=malloc(sizeof(struct node));
    if(avail==NULL){
        printf("Overflow");
    }    
    else{
        new=avail;
        printf("Enter data to be inserted at beginning");
        scanf("%d", &new->data);
        new->next=head;
        head=new;
    }
    return head;
}
struct node *insertend(struct node *head){
    struct node *new, *avail, *ptr;
    avail=malloc(sizeof(struct node));
    if(avail==NULL){
        printf("Overflow");
    }
    else{
        new=avail;
        ptr=head;
        printf("Enter data to be inserted at end");
        scanf("%d", &new->data);
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=NULL;
    }
    return head;
}
struct node *insertbefore(struct node *head){
    struct node *new, *avail, *ptr, *preptr;
    int a;
    avail=malloc(sizeof(struct node));
    if(avail==NULL){
        printf("Overflow");
    }
    else{
        new=avail;
        printf("Enter node before which new node is to be inserted");
        scanf("%d", &a);
        printf("Enter data to be inserted");
        scanf("%d", &new->data);
        ptr=head;
        preptr=head;
        while(ptr->data==a){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=new;
        new->next=ptr;
    }
    return head;
}