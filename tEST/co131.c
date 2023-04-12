#include <stdio.h>
#define MAX 100
int stack[MAX],top1=-1,top2=MAX;
void push1(int val);
int pop1();
void display1();
void push2(int val);
int pop2();
void display2();
int main(){
    int ch, val;
    do{
        printf("\n *****MENU*****");
        printf("\n 1. PUSH IN STACK 1");
        printf("\n 2. POP FROM STACK 1");
        printf("\n 3. DISPLAY STACK 1");
        printf("\n 4. PUSH IN STACK 2");
        printf("\n 5. POP FROM STACK 2");
        printf("\n 6. DISPLAY STACK 2");
        printf("\n 7. EXIT");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:                                                                 //Pushing in stack 1
            printf("\nEnter the value to push in Stack 1");
            scanf("%d", &val);
            push1(val);
            break;
            case 2:                                                                //Popping from stack 1
            val=pop1();
            if(val!=-1){
                printf("\nThe value popped from Stack 1 = %d", val);
            }
            break;
            case 3:                                                            //Displaying stack 1
            printf("\nStack 1 : ");
            display1();
            break;
            case 4:                                                                //Pushing in stack 2
            printf("\nEnter the value to push in Stack 2");
            scanf("%d", &val);
            push2(val);
            break;
            case 5:                                                               //Popping from stack 2
            val=pop2();
            if(val!=-1){
                printf("\nThe value popped from Stack 2 = %d", val);
            }
            break;
            case 6:                                                             //Displaying stack 2
            printf("\nStack 2 : ");
            display2();
            break;
        }
    }while(ch!=7);
    return 0;
}
void push1(int val){              //Pushing in stack 1
    if(top1==top2-1){
        printf("\nOverflow");
    }
    else{
        top1++;
        stack[top1]=val;
    }
}
int pop1(){                     //Popping from stack 1
    int val;
    if(top1==-1){
        printf("\nUnderflow");
        return -1;
    }
    else{
        val=stack[top1];
        top1--;
        return val;
    }
}
void display1(){                   //Displaying stack 1
    int i;
    if(top1==-1){
        printf("Stack 1 is empty");
    }
    else{
        for(i=top1; i>=0; i--)
        printf("%d ", stack[i]);
    }
}
void push2(int val){                  //Pushing in stack 2
    if(top2-1==top1){
        printf("\nOverflow");
    }
    else{
        top2--;
        stack[top2]=val;
    }
}
int pop2(){                         //Popping from stack 2
    int val;
    if(top2==MAX){
        printf("\nUnderflow");
        return -1;
    }
    else{
        val=stack[top2];
        top2++;
        return val;
    }
}
void display2(){                       //Displaying stack 2
    int i;
    if(top2==MAX){
        printf("Stack 2 is empty");
    }
    else{
        for(i=top2; i<MAX; i++)
        printf("%d ",stack[i]);
    }
}