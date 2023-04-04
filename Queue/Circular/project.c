#include <stdio.h>
void insert();
void display();
int delete();
int front=-1, rear=-1, i;
int queue[10];
int main(){
    int val, ch;
    do{
        printf("\nWhat do you want to do:\n1 for insert\n2 for delete\n3 for display\n4 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            val=delete();
            printf("Deleted value is : %d", val);
            break;
            case 3:
            display();
            break;
        }
    }while(ch!=4);
    return 0;
}
void insert(){
    if(front==0 && rear==9){
        printf("Overflow");
    }
    else{
        if(front==-1 && rear==-1){
            rear++;
            front=rear;
        }
        else if(rear==9){
            rear=0;
        }
        else{
            rear++;
        }
        printf("Enter data");
        scanf("%d", &queue[rear]);
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
int delete(){
    int data;
    if(front==-1 && rear==-1){
        printf("Underflow\n");
        return -1;
    }
    else{
        data=queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else if(front==9){
            front=0;
        }
        else{
            front++;
        }
    }
    return data;
}