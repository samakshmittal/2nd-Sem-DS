#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *delete(struct node *);
int main(){
    int ch;
    do{
        printf("\n MAIN MENU");
        printf("\n 1: Create a linked list");
        printf("\n 2: Display the linked list");
        printf("\n 3: Delete element from linked list");
        printf("\n 4. Exit");
        printf("\n Enter choice");
        scanf("%d", &ch);
        switch(ch){
        case 1: 
        head = create(head);
        break;
        case 2: 
        head = display(head);
        break;
        case 3:
        head = delete(head);
        break;
        }
    }while(ch!=4);
    return 0;
}
struct node *create(struct node *head){
    int ch;
    struct node *ptr, *preptr ;
    printf("Enter -1 to stop inserting elements");
    scanf("%d", &ch);
    while(ch!=-1){
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("Overflow");
        }
        else{
            printf("Enter data");
            scanf("%d", &ptr->data);
            ptr->next=NULL;
            if(head==NULL){
                head=ptr;
                preptr=ptr;
            }
            else{
                preptr->next=ptr;
                preptr=ptr;
            }
        }
        printf("Enter -1 to stop inserting elements");
        scanf("%d", &ch);
    }
    return head;
}
struct node *display(struct node *head){
    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Linked list is empty");
    }
    else{
        printf("Elements of the linked list are : ");
        while(ptr!=NULL){
            printf("%d ", ptr->data);
            ptr=ptr->next;
        }
    }
    return head;
}
struct node *delete(struct node *head){
    struct node *ptr, *preptr;
    int a;
    ptr=head;
    preptr=ptr;
    printf("Enter data of node to be deleted");
    scanf("%d", &a);
    if(head->data==a){
        head=head->next;
    }
    else{
        while(ptr->data!=a){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
    }
    free(ptr);
    return head;
}