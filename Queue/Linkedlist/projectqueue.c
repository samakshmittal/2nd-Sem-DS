#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL, *rear=NULL;
struct node *insert(struct node *front);
struct node *delete(struct node *front);
struct node *display(struct node *front);
int main(){
    int ch;
    do{
        printf("\nWhat do you want to do:\n1 for insert\n2 for delete\n3 for display\n4 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            front=insert(front);
            break;
            case 2:
            front=delete(front);
            break;
            case 3:
            front=display(front);
            break;
        }
    }while(ch!=4);
    return 0;
}
struct node *insert(struct node *front){
    struct node *ptr;
    ptr=malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("overflow");
    }
    else{
        printf("Enter data");
        scanf("%d", &ptr->data);
        ptr->next=NULL;
        if(front==NULL){
            front=rear=ptr;
        }
        else{
            rear->next=ptr;
            rear=ptr;
        }
    }
    return front;
}
struct node *delete(struct node *front){
    struct node *ptr=front;
    if(ptr==NULL){
        printf("Underflow");
    }
    else if(front==rear){
        front=rear=NULL;
        printf("Deleted element is : %d", ptr->data);
        free(ptr);
    }
    else{
        front=ptr->next;
        printf("Deleted element is : %d", ptr->data);
        free(ptr);
    }
    return front;
}
struct node *display(struct node *front){
    struct node *ptr=front;
    if(ptr==NULL){
        printf("Queue is empty");
    }
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    return front;
}