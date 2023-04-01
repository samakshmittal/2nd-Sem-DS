#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL, *new, *ptr;
int value;
struct node *push(struct node *top);
struct node *pop(struct node *top);
struct node *display(struct node *top);
int main(){
    int ch;
    do
    {
        printf("\n *****MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n Enter your option: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            top = push(top);
            break;
            case 2:
            top = pop(top);
            break;
            case 3:
            top=display(top);
            
            break;
        }
        }while(ch != 4);
    return 0;
}
struct node *push(struct node *top){
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        printf("Enter data");
        scanf("%d", &new->data);
        if(top==NULL){
            top=new;
            new->next=NULL;
        }
        else{
            new->next=top;
            top=new;
        }
    }
    return top;
}
struct node *display(struct node *top){
    if (top==NULL){
        printf("Stack is empty");
    }
    else{
        ptr=top;
        while(ptr!=NULL){
            printf("%d ", ptr->data);
            ptr=ptr->next;
        }
    }
    return top;
}
struct node *pop(struct node *top){
    if(top==NULL){
        printf("Underflow");
    }
    else{
        ptr=top;
        top=top->next;
        printf("Value deleted is %d", ptr->data);
        free(ptr);
    }
    return top;
}