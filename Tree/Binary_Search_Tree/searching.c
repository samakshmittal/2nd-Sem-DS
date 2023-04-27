#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL, *ptr, *ptr1, *preptr;
void chec(struct node *ptr1, struct node *ptr){
    while(ptr1!=NULL){
    if(ptr1->data>ptr->data){
        preptr=ptr1;
        ptr1=ptr1->left;
        chec(ptr1, ptr);
    }
    else if(ptr1->data<ptr->data){
        preptr=ptr1;
        ptr1=ptr1->right;
        chec(ptr1, ptr);
    }}
}
struct node *search(struct node *root){
    int val;
    printf("Enter value to searched");
    scanf("%d", &val);
    struct node *ptr=root;
    while(ptr!=NULL){
        if(ptr->data==val){
            printf("Element found");
            break;
        }
        else if(val<ptr->data){
            ptr=ptr->left;
        }
        else if(val>ptr->data){
            ptr=ptr->right;
        }
    }
    return root;
}
int main(){
    int ch;
    printf("Enter -1 to stop");
    scanf("%d", &ch);
    while(ch!=-1){
        ptr=malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &ptr->data);
        ptr->left=NULL;
        ptr->right=NULL;
        if(root==NULL){
            root=ptr;
        }
        else{
            ptr1=root;
            chec(ptr1, ptr);
            if(preptr->data>ptr->data){
                preptr->left=ptr;
            }
            else if(preptr->data<ptr->data){
                preptr->right=ptr;
            }
        }
        printf("Enter -1 to stop");
        scanf("%d", &ch);
    }
    search(root);
    return 0;
}