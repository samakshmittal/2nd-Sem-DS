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
        }
    }
}
void insert(){
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
}
void preorder(struct node *ptr){
    if(ptr!=NULL){
        printf("%d ", ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node *ptr){
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ", ptr->data);
    }
}
void inorder(struct node *ptr){
    if(ptr!=NULL){
        inorder(ptr->left);
        printf("%d ", ptr->data);
        inorder(ptr->right);
    }
}
int main(){
    int ch;
    do{
        printf("\n---Main Menu---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Preorder");
        printf("\n4. Postorder");
        printf("\n5. Inorder");
        printf("\n6. Exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 3:
            ptr=root;
            preorder(ptr);
            break;
            case 4:
            ptr=root;
            postorder(ptr);
            break;
            case 5:
            ptr=root;
            inorder(ptr);
            break;
        }
    }while(ch!=6);
    return 0;
}