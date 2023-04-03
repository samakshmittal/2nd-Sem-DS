#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *ptr, *front=NULL, *rear=NULL;
    int ch;
    printf("Enter 0 to insert");
    scanf("%d", &ch);
    while(ch==0){
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("overflow");
        }
        else{
            printf("Enter data");
            scanf("%d", &ptr->data);
            ptr->next=NULL;
            if(front==NULL){
                front=ptr;
                rear=ptr;
            }
            else{
                rear->next=ptr;
                rear=ptr;
            }
            printf("Enter 0 to insert");
            scanf("%d", &ch);
        }
    }
    ptr=front;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    return 0;
}