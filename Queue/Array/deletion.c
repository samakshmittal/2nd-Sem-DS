#include <stdio.h>
int main(){
    int n, front=-1, rear=-1, ch, i;
    printf("Enter max size of array");
    scanf("%d", &n);
    int q[n];
    printf("Enter 0 to insert element");
    scanf("%d", &ch);
    while(ch==0){
        if(rear==n-1){
            printf("Overflow");
        }
        else{
            if(front==-1){
                rear++;
                printf("Enter data");
                scanf("%d", &q[rear]);
                front=rear;
            }
            else{
                rear++;
                printf("Enter data");
                scanf("%d", &q[rear]);
            }
        }
        printf("Enter 0 to insert element");
        scanf("%d", &ch);
    }
    for(i=front; i<=rear; i++){
        printf("%d ", q[i]);
    }
    printf("\nEnter 0 to delete element");
    scanf("%d", &ch);
    while(ch==0){
        int data;
        if(front==-1){
            printf("Underflow");
        }
        else{
            if(front==rear){
                data=q[front];
                front=-1;
            }
            else{
                data=q[front];
                front++;
            }
        }
        printf("\n%d is the deleted element", data);
        for(i=front; i<=rear; i++){
        printf("%d ", q[i]);
        }
        printf("\nEnter 0 to delete element");
        scanf("%d", &ch);
    }
    return 0;
}