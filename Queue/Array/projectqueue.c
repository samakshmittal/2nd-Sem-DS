#include <stdio.h>
void insert();
void display();
void delete();
int front=-1, rear=-1, i;
int queue[10];
int main(){
    int e, ch;
    do{
        printf("\nWhat do you want to do:\n1 for insert\n2 for delete\n3 for display\n4 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
        }
    }while(ch!=4);
    return 0;
}
void insert(){
    if(rear==9){
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
            printf("%d", queue[i]);
        }
    }
    else{
        printf("Queue is empty");
    }
}
void delete(){
    int data;
    if(front==-1){
        printf("Underflow");
    }
    else{
        if(front==rear){
            data=queue[front];
            front=-1;
            rear=-1;
        }
        else{
            data=queue[front];
            front++;
        }
    }
}