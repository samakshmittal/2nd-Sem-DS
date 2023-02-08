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
void deletebegin(struct node *head){
    struct node *ptr;
    if(head==NULL){
        printf("Underflow");
    }
    else{
        ptr=head;
        head=head->next;
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
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Display the list");
        printf("\n 2: Add a node at the beginning");
        printf("\n 3: Add a node at the end");
        printf("\n 4: Add a node before a given node");
        printf("\n 5: Delete a node from the beginning");
        printf("\n 6: Delete a node from the ending");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            display(head);
            break;
            case 2:
            insertbegin(head);
            display(head);
            break;
            case 3:
            insertend(head);
            display(head);
            break;
            case 4:
            insertmidnumber(head);
            display(head);
            break;
            case 5:
            deletebegin(head);
            display(head);
            break;
        }
    }while(ch!=10);
    return 0;   
}