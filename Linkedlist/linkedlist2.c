#include <stdio.h>
#include <stdlib.h>
struct ab{
    int data;
    struct ab *next;
};
int main(){
    int n, a;
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
    struct ab *temp=head;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    return 0;   
}