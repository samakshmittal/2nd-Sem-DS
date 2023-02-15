#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;    
};
int main(){
    int n, a;
    printf("Enter number of elements");
    scanf("%d", &n);
    struct node *p, *head, *prev1, *s, *new, *avail;
    for(int i=0; i<n; i++){
        p=malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next=NULL;
        if(i==0){
            head=p;
            prev1=p;
            s=p;
            head->prev=NULL;
        }
        else{
            prev1->next=p;
            s=prev1;
            prev1->prev=s;
            prev1=p;
        }
    }
    avail=malloc(sizeof(struct node));
    if (avail==NULL){
        printf("Overflow");
    }
    else{
        new=avail;
        printf("Enter new node at beginning");
        scanf("%d", &new->data);
        new->prev=NULL;
        head->prev=new;
        new->next=head;
        head=new;
    }
    p=head;
    while(p!=NULL){
        printf("%d\n", p->data);
        p=p->next;
    }
}