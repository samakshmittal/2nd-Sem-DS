#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insertbegin(struct node *);
int main(){
    int ch;
    do{
        printf("\n MAIN MENU");
        printf("\n 1: Create a circular linked list");
        printf("\n 2: Display the circular linked list");
        printf("\n 3: Add a node at the beginning of the circular linked list");
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
        head = insertbegin(head);
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
            ptr->next=head;
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
        printf("Elements of the circular linked list are : ");
        while(ptr->next!=head){
            printf("%d ", ptr->data);
            ptr=ptr->next;
        }
        printf("%d", ptr->data);
    }
    return head;
}
struct node *insertbegin(struct node *head){
    struct node *new, *ptr;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }    
    else{
        printf("Enter data to be inserted at beginning");
        scanf("%d", &new->data);
        ptr=head;
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=head;
        head=new;
    }
    return head;
}