#include <stdio.h>
#include <stdlib.h>
struct node{
    char name;
    struct node *next;
};
int n, i, check, t;
struct node *head=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *add(struct node *);
struct node *delete(struct node *);
struct node *run(struct node *);
int main(){
    int choice;
    do
    {
        printf("\n\n MAIN MENU");
        printf("\n 1. Create a multiplayer");
        printf("\n 2. Display the multiplayer");
        printf("\n 3. Add a new player");
        printf("\n 4. Delete a player");
        printf("\n 5. Run multiplayer");
        printf("\n 6. Exit");
        printf("\n\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
            head=create(head);
            printf("\n Multiplayer created");
            break;
            case 2: 
            head=display(head);
            break;
            case 3: 
            head=add(head);
            break;
            case 4: 
            head=delete(head);
            break;
            case 5: 
            head=run(head);
            break;
        }
    }while(choice!=6);
    return 0;
}
struct node *create(struct node *head){
    struct node *ptr, *preptr;
    printf("Enter number of players in multiplayer");
    scanf("%d",&n);
    t=20/n;
    for(i=0; i<n; i++){
        ptr=malloc(sizeof(struct node));
        if(ptr==NULL){
            printf("Overflow");
        }
        else{
            printf("Enter name of player %d", i+1);
            scanf("%s", &ptr->name);
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
    }
    return head;
}
struct node *display(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr->next!=head){
        printf("%c\n", ptr->name);
        ptr=ptr->next;
    }
    printf("%c\n", ptr->name);
    return head;
}
struct node *add(struct node *head){
    struct node *new, *ptr;
    new=malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow");
    }
    else{
        ptr=head;
        printf("Enter name of player");
        scanf("%s", &new->name);
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=head;
    }
    return head;
}
struct node *delete(struct node *head){
    struct node *ptr, *preptr;
    char a;
    ptr=head;
    printf("Enter name of player to be deleted");
    scanf("%s", &a);
    while(ptr->name!=a){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
    return head;
}
struct node *run(struct node *head){
    struct node *ptr=head;
    int flag=1;
    while(flag==1){
        printf("%c is playing", ptr->name);
        ptr=ptr->next;
        sleep(t);
        printf("Press N to stop");
        scanf("%s", &check);
        if(check=='N' || check=='n'){
            flag=0;
        }
        else{
            flag=1;
        }
    }
    return head;
}