#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
char stack[max];
int top=-1;
void push(char stack[], char val);
char pop(char stack[]);
void infixtopostfix(char source[], char target[]);
int getpriority(char op);
int main(){
    char infix[100], postfix[100];
    printf("\nEnter infix expression\n");
    gets(infix);
    infixtopostfix(infix, postfix);
    printf("Postfix expression : ");
    puts(postfix);
    return 0;
}
void push(char stack[], char val){
    if(top==max-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=val;
    }
}
char pop(char stack[]){
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
void infixtopostfix(char source[], char target[]){
    int i=0, j=0;
    char temp;
    // int x=strlen(source);
    // source[x]=')';
    // x++;
    // int ub=x-1;
    // while(ub>=0){
    //     source[ub+1]=source[ub];
    //     ub--;
    // }
    // source[0]='(';
    while(source[i]!='\0'){
        if(source[i]=='('){
            push(stack, source[i]);
            i++;
        }
        else if(source[i]==')'){
            while((top!=-1) && (stack[top]!='(')){
                target[j]=pop(stack);
                j++;
            }
            if(top==-1){
                printf("Incorrect expression");
                exit(1);
            }
            temp=pop(stack);
            i++;
        }
        else if((source[i]>='0' && source[i]<='9') || (source[i]>='A' && source[i]<='Z') || (source[i]>='a' && source[i]<='z')){
            target[j]=source[i];
            i++;
            j++;    
        }
        else if(source[i]=='+' || source[i]=='-' || source[i]=='*' || source[i]=='/' || source[i]=='%'){
            while((top!=-1) && (stack[top]!='(') && (getpriority(stack[top])>getpriority(source[i]))){
                target[j]=pop(stack);
                j++;
            }
            push(stack, source[i]);
            i++;
        }
        else{
            printf("Incorrect element in expression");
            exit(1);
        }
    }
    while((top!=-1) && (stack[top]!='(')){
        target[j] = pop(stack);
        j++;
    }
    target[j]='\0';
}
int getpriority(char op){
    if (op=='/' || op=='*' || op=='%'){
        return 1;
    }
    else if(op=='+' || op=='-'){
        return 0;
    }
}