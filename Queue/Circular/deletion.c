#include <stdio.h>
int main(){
    int n, front=-1, rear=-1, ch, i;
    printf("Enter max size of array");
    scanf("%d", &n);
    int q[n];
    printf("Enter 0 to insert element");
    scanf("%d", &ch);
    while(ch==0){
        if(front==0 && rear==n-1){
            printf("Overflow");
        }
        else{
            if(front==-1 && rear==-1){
                rear++;
                front=rear;
            }
            else if(rear==n-1){
                rear=0;
            }
            else{
                rear++;
            }
            printf("Enter data");
            scanf("%d", &q[rear]);
        }
        printf("Enter 0 to insert element");
        scanf("%d", &ch);
    }
    for(i=0; i<=rear; i++){
        printf("%d ", q[i]);
    }
    printf("Enter 0 to delete element");
    scanf("%d", &ch);
    while(ch==0){
        if(front==-1 && rear==-1){
            printf("Underflow");
        }
        else{
            if(front==rear){
                front=rear=-1;
            }
            else if(front==n-1){
                front=0;
            }
            else{
                front++;
            }
        }
        for(i=front; i<=rear; i++){
            printf("%d ", q[i]);
        }
        printf("Enter 0 to delete element");
        scanf("%d", &ch);
    }
    return 0;
}