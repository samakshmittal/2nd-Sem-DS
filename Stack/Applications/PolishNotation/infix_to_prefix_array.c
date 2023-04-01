#include <stdio.h>
#define max 100
char stack[max];
int top=-1;
void push(char stack[], int val);
char pop(char stack[]);
void infixtopostfix(char source[], char target[]);
int getpriority(char op);
void reverse(char stack[]);
int main(){
    char infix[100], postfix[100];
    printf("Enter infix expression");
    gets(infix);
    printf("Your infix expression is : ");
    puts(infix);
    infixtopostfix(infix, postfix);
    printf("\nPostfix expression is : ");
    puts(postfix);
    reverse(infix);
    infixtopostfix(infix, postfix);
    printf("\nCorresponding Postfix expression is : ");
    puts(postfix);
    reverse(postfix);
    printf("\nPrefix expression is : ");
    puts(postfix);
    return 0;
}
void push(char stack[], int val){
    if(top==max-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=val;
    }
}
char pop(char stack[]){
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
void infixtopostfix(char source[], char target[]){
    int i=0, j=0;
    char temp;
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
            j++;
            i++;
        }
        else if(source[i]=='+' || source[i]=='-' || source[i]=='*' || source[i]=='/' || source[i]=='%'){
            while((top!=1) && (source[i]!='(') && (getpriority(stack[top])>getpriority(source[i]))){
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
        target[j]=pop(stack);
        j++;
    }
    target[j]='\0';
}
int getpriority(char op){
    if(op=='+' || op=='-'){
        return 0;
    }
    else if(op=='*' || op=='/' || op=='%'){
        return 1;
    }
}
void reverse(char stack[]){
    int i=0, x=strlen(stack);
    char temp;
    for(i=0; i<=x/2; i++){
        temp=stack[i];
        stack[i]=stack[x-i-1];
        stack[x-i-1]=temp;
    }
    for(i=0; i<=x/2; i++){
        if(stack[i]=='('){
            stack[i]=')';
        }
        else if(stack[i]==')'){
            stack[i]='(';
        }
    }
}