#include <stdio.h>
#define max 100
void insert();
void display();
void reverse();
int front=-1, rear=-1, i;
int queue[max];
int main(){
    int e, ch;
    do{
        printf("\nWhat do you want to do:\n1 for insert\n2 for display\n3 for reverse\n4 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            reverse();
            break;
        }
    }while(ch!=4);
    return 0;
}
void insert(){
    if(rear==max-1){
        printf("Overflow");
    }
    else{
        if(front==-1){
            rear++;
            printf("Enter data");
            scanf("%d", &queue[rear]);
            front=rear;
        }
        else{
            rear++;
            printf("Enter data");
            scanf("%d", &queue[rear]);
        }
    }
}
void display(){
    if(front!=-1){
        for(i=front; i<=rear; i++){
            printf("%d ", queue[i]);
        }
    }
    else{
        printf("Queue is empty");
    }
}
void reverse(){
    int temp;
    if(front<rear && front>=0){
        for(i=0; i<=rear/2; i++){
            temp=queue[i];
            queue[i]=queue[rear-i];
            queue[rear-i]=temp;
        }
    }
}