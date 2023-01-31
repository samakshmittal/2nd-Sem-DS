#include <stdio.h>
#include <stdlib.h>
struct ab{
    int data;
    struct ab *next;
};
int main(){
    struct ab *a1, *a2, *a3, *a4, *a5;
    a1=malloc(sizeof(struct ab));
    a2=malloc(sizeof(struct ab));
    a3=malloc(sizeof(struct ab));
    a4=malloc(sizeof(struct ab));
    a5=malloc(sizeof(struct ab));
    printf("Enter 1st value");
    scanf("%d", &a1->data);
    printf("Enter 2nd value");
    scanf("%d", &a2->data);
    printf("Enter 3rd value");
    scanf("%d", &a3->data);
    printf("Enter 4th value");
    scanf("%d", &a4->data);
    printf("Enter 5th value");
    scanf("%d", &a5->data);
    a1->next=a2;
    a2->next=a4;
    a3->next=a5;
    a4->next=a3;
    a5->next=NULL;
    struct ab *temp=a1;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    return 0;
}