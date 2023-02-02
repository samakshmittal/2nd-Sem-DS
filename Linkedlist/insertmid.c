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
    printf("Enter location");
    scanf("%d", &a);
    if(a<n){
        prev=head;
        p=head;
        if(avail==NULL){
            printf("Overflow");
        }
        else{        
            new=avail;
            //avail=avail->next;
            printf("Enter data of new node");
            scanf("%d", &new->data);
            while(prev!=NULL && count<=a){
                if(count==a){
                    p->next=new;
                    new->next=prev;
                }
                count++;
                p=prev;
                prev=prev->next;
            }
        }
    }
    p=head;
    while(p!=NULL){
            printf("%d\n", p->data);
            p=p->next;
        }
    return 0;   
}