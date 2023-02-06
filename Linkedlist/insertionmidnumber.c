#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int n, a, i, count=0;
    printf("Enter number of elements");
    scanf("%d", &n);
    struct node *p, *head, *prev, *avail, *new;
    for(i=0; i<n; i++){
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
    avail=malloc(sizeof(struct node));
    printf("Enter data before which new node is to be put");
    scanf("%d", &a);
    prev=head;
    p=head;
    if(avail==NULL){
        printf("Overflow");
    }
    else{        
        new=avail;
        printf("Enter data of new node");
        scanf("%d", &new->data);
        while(prev->data!=a){
            p=prev;
            prev=prev->next;
        }
        p->next=new;
        new->next=prev;
    }
    p=head;
    while(p!=NULL){
            printf("%d\n", p->data);
            p=p->next;
        }
    return 0;   
}