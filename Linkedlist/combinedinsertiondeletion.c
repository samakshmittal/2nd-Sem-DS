#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void create(){
    int n;
    printf("Enter number of elements");
    scanf("%d", &n);
    struct node *p, *prev;
    for(int i=0; i<n; i++){
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
}
void insertbegin(struct node *head){
    struct node *new, *avail;
    avail=malloc(sizeof(struct node));
    if(avail==NULL){
        printf("Overflow");
    }
    else{        
        new=avail;
        printf("Enter data of new node");
        scanf("%d", &new->data);
        new->next=head; 
        head=new;
    }
}
void insertend(struct node *head){
    struct node *new, *avail, *ptr;
    avail=malloc(sizeof(struct node));
    if(avail==NULL){
        printf("Overflow");
    }
    else{
        new=avail;
        printf("Enter data of new node");
        scanf("%d", &new->data);
        new->next=NULL;
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new;
    }
}
void insertmidnumber(struct node *head){
    int a;
    struct node *avail, *new, *ptr, *preptr;
    avail=malloc(sizeof(struct node));
    printf("Enter data before which new node is to be put");
    scanf("%d", &a);
    ptr=head;
    preptr=head;
    if(avail==NULL){
        printf("Overflow");
    }
    else{        
        new=avail;
        printf("Enter data of new node");
        scanf("%d", &new->data);
        while(preptr->data!=a){
            ptr=preptr;
            preptr=preptr->next;
        }
        ptr->next=new;
        new->next=preptr;
    }
}
void display(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
            printf("%d\n", temp->data);
            temp=temp->next;
        }
}
int main(){
    int ch;
    create();
    display(head);
    do{
        printf("------------MAIN MENU--------------\n");
        printf("Choose 1 for inserting a new element at the beginning of the linkedlist\n");
        printf("Choose 2 for inserting a new element at the ending of the linkedlist\n");
        printf("Choose 3 for inserting a new element at any location in middle of the linkedlist by searching number\n");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            insertbegin(head);
            display(head);
            case 2:
            insertend(head);
            display(head);
            case 3:
            insertmidnumber(head);
            display(head);
        }
    }while(ch!=4);
    return 0;   
}