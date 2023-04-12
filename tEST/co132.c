#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
char stack[max];
int top=-1;
void push(char stack[], char val);
char pop(char stack[]);
void check(char a[], char b[]);
int main(){
    char a[100], b[100];
    gets(a);
    check(a, b);
    return 0;
}
void push(char stack[], char val){                    //Pushing operator in stack using array
    if(top==max-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=val;
    }
}
char pop(char stack[]){                              //Popping operator from stack using array
    char val=' ';
    if(top==-1){
        printf("Underflow");
    }
    else{
        val=stack[top];
        top--;
    }
    return val;
}
void check(char a[], char b[]){                           //Checking whether the expression is true or false
    int i=0, j=0, flag=0;
    char temp;
    while(a[i]!='\0'){
        if(a[i]=='(' || a[i]==')' || a[i]=='{' || a[i]=='}' || a[i]=='[' || a[i]==']'){
            if(a[i]=='('){                                    //Checking for (
                push(stack, a[i]);
                i++;
            }
            else if(a[i]==')'){                                       //Checking for )
                while((top!=-1) && (stack[top]!='(')){
                    b[j]=pop(stack);
                    j++;
                }
                if(top==-1){
                    flag=1;
                    printf("False");
                    exit(1);
                }
                temp=pop(stack);
                i++;
            }
            if(a[i]=='{'){                                              //Checking for {
                push(stack, a[i]);
                i++;
            }
            else if(a[i]=='}'){                                           //Checking for }
                while((top!=-1) && (stack[top]!='{')){
                    b[j]=pop(stack);
                    j++;
                }
                if(top==-1){
                    flag=1;
                    printf("False");
                    exit(1);
                }
                temp=pop(stack);
                i++;
            }
            if(a[i]=='['){                                           //Checking for [
                push(stack, a[i]);
                i++;
            }
            else if(a[i]==']'){                                           //Checking for ]
                while((top!=-1) && (stack[top]!='[')){
                    b[j]=pop(stack);
                    j++;
                }
                if(top==-1){
                    flag=1;
                    printf("False");
                    exit(1);
                }
                temp=pop(stack);
                i++;
            }
        }
        else{
            flag=1;
            printf("False");
            exit(1);
        }
    }
    b[j]='\0';
    if(flag==0){
        printf("True");
    }
}