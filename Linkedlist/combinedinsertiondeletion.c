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
void insertbegin(head){
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
void insertend(head){
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
void display(head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
            printf("%d\n", temp->data);
            temp=temp->next;
        }
}
int main(){
    int ch;
    do{
        printf("------------MAIN MENU--------------");
        printf("Choose 1 for creating linkedlist");
        printf("Choose 2 for inserting a new element at the beginning of the linkedlist");
        scanf("%d", &ch);
        switch (ch){
            case 1:
            create();
            display(head);
            case 2:
            insertend(head);
            display(head);
        }
    }while(ch!=3);
    getch();
    return 0;   
}