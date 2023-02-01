#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int n, a;
    printf("Enter number of elements");
    scanf("%d", &n);
    struct node *p, *head, *prev, *avail, *new;
    for(int i=0; i<n; i++){
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
    if(avail==NULL){
        printf("Overflow");
    }
    else{        
        new=avail;
        avail=avail->next;
        printf("Enter data of node");
        scanf("%d", &new->data);
        new->next=head;
        head=new;
    }
    p=head;
    while(p!=NULL){
            printf("%d\n", p->data);
            p=p->next;
        }
    return 0;   
}