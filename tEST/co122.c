#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int ch;
    struct node *ptr, *head=NULL, *preptr;
    printf("Enter -1 to stop insertion in linkedlist");
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
        printf("Enter -1 to stop insertion in linkedlist");
        scanf("%d", &ch);
    }
    ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    preptr=head;
    while(preptr->data==57 && preptr->next!=head){
        if(preptr==head){
            preptr->data=97;
        }
        else if(preptr==ptr){
            preptr->data=20;
        }
        else{
            preptr->data=47;
        }
        preptr=preptr->next;
    }
    if(ptr->data==57){
        ptr->data=47;
    }
    while(preptr->next!=head){
        if(preptr!=head && preptr->data==57){
            preptr->data=20;
        }
        preptr=preptr->next;
    }
    ptr=head;
    while(ptr->next!=head){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("%d", ptr->data);
    return 0;
}