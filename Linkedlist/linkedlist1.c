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
    struct ab *a1[n];
    for(int i=0; i<n; i++){
        a1[i]=malloc(sizeof(struct ab));
        printf("Enter a1[%d] value", i);
        scanf("%d", &a1[i]->data);
    }
    for(int i=0; i<n; i++){
        printf("%d\n", a1[i]->data);
    }
    for(int i=0; i<n; i++){
        int mn=0;
        printf("Enter a1[%d] next place value", i);
        while(mn==0){   
            scanf("%d", &a);
            if(a<n){
                mn=1;
            }
            else{
                printf("Try again");
                mn=0;
            }
        }
        a1[i]->next=a1[a];
    }
    struct ab *temp=a1[0];
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
    return 0;
}