#include <stdio.h>
#define max 10
void insert(char val);
void display();
void delete();
int front=1, rear=5, i;
char queue[max];
int main(){
    queue[1]='a';
    queue[2]='b';
    queue[3]='c';
    queue[4]='d';
    queue[5]='e';
    insert('f');
    display();
    delete();
    delete();
    display();
    insert('g');
    display();
    insert('h');
    display();
    delete();
    delete();
    delete();
    delete();
    display();
    insert('i');
    display();
    return 0;
}
void insert(char val){
    if(rear==max-1){
        printf("Overflow");
    }
    else{
        rear++;
        queue[rear]=val;
    }
}
void display(){
    printf("\n");
    if(front!=-1){
        for(i=front; i<=rear; i++){
            printf("%c", queue[i]);
        }
    }
    else{
        printf("Queue is empty\n");
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