#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;    
};
struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insertbegin(struct node *);
struct node *insertend(struct node *);
struct node *insertbefore(struct node *);
struct node *insertafter(struct node *);
struct node *deletebegin(struct node *);
struct node *deleteend(struct node *);
struct node *deletegiven(struct node *);
struct node *deleteafter(struct node *);
struct node *deleteentire(struct node *);
struct node *sort(struct node *);
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
        start = create(start);
        printf("\n LINKED LIST CREATED");
        break;
        case 2: 
        start = display(start);
        break;
        case 3:
        start = insertbegin(start);
        break;
        case 4:
        start = insertend(start);
        break;
        /*case 5:
        start = insertbefore(start);
        break;
        case 6:
        start = insertafter(start);
        break;
        case 7:
        start = deletebegin(start);
        break;
        case 8:
        start = deleteend(start);
        break;
        case 9:
        start = deletegiven(start);
        break;
        case 10:
        start = deleteafter(start);
        break;
        case 11:
        start = deleteentire(start);
        break;
        case 12:
        start = sort(start);
        break;*/
        }
    }while(option!=13);
}
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
        printf("%d ", ptr->data);
        ptr=ptr->next;
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
        if(start==NULL){
            start=new;
            new->prev=NULL;
            new->next=NULL;
            printf("Enter data");
            scanf("%d", &new->data);
        }
        else{
            printf("Enter data");
            scanf("%d", &new->data);
            new->prev=NULL;
            new->next=start;
            start->prev=new;
            start=new;
        }
    }
    return start;
}
struct node *insertend(struct node *start){
    struct node *new, *ptr, *preptr;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        printf("Enter data");
        scanf("%d", &new->data);
        ptr=start;
        while (ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        new->prev=preptr;
        preptr->next=new;
        new->next=NULL;
    }
    return start;
}
/*struct node *insertbefore(struct node *start){
    struct node *new, *ptr, *preptr;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        int a;
        printf("Enter data before which")
        printf("Enter data");
        scanf("%d", &new->data);
        ptr=start;
        while (ptr->data!=a)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        new->prev=preptr;
        preptr->next=new;
        new->next=NULL;
    }
    return start;
}*/