#include <stdio.h>
#define max 100
char stack[max];
int top=-1;
void push(char stack[], int val){
    if(top==max-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=val;
    }
}
int pop(char stack[]){
    char val;
    if(top==-1){
        printf("underflow");
    }
    else{
        val=stack[top];
        top--;
    }
    return val;
}