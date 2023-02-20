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
    struct node *p, *head, *prev1, *new, *s;
    for(int i=0; i<n; i++){
        p=malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->prev=NULL;
        p->next=NULL;
        if(i==0){
            head=p;
            prev1=p;
            s=p;
        }
        else{
            prev1->next=p;
            s=prev1;
            p->prev=s;
            prev1=p;
        }
    }
    p=head;
    while(p!=NULL){
        printf("%d\n", p->prev);
        printf("%d\n", p->data);
        printf("%d\n", p->next);
        p=p->next;
    }
}