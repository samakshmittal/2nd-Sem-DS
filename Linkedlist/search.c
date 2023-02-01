#include <stdio.h>
#include <stdlib.h>
struct ab{
    int data;
    struct ab *next;
};
int main(){
    int n, x, a;
    printf("Enter number of elements");
    scanf("%d", &n);
    struct ab *p, *head, *prev;
    for(int i=0; i<n; i++){
        p=malloc(sizeof(struct ab));
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
    printf("Enter element to be inserted");
    scanf("%d", &x);
    struct ab *temp=head;
    while(temp!=NULL){
        if(temp->data==x){
            a=0;
            break;
        }
        else{
            a=1;
        }
        temp=temp->next;
    }
    if(a==0){
        printf("Search successful");
    }
    else{
        printf("Search unsuccessful");
    }
    return 0;   
}