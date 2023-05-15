#include <stdio.h>
#include <conio.h>
#define max 30
int que[max], rear1=-1, front1=-1, rear2=max, front2 = max, i, x;
void insert1(int x);
int delete1();
void display1();
void insert2(int x);
int delete2();
void display2();
int main(){
    int choice;
    do{
        printf("\n MAIN MENU");
        printf("\n 1. Insert data in queue 1");
        printf("\n 2. Delete data from queue 1");
        printf("\n 3. Display queue 1");
        printf("\n 4. Insert data in queue 2");
        printf("\n 5. Delete data from queue 2");
        printf("\n 6. Display queue 2");
        printf("\n 7. EXIT");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n Enter the value to be inserted in Queue 1 : ");
            scanf("%d",&x);
            insert1(x);
            break;
            case 2:
            x=delete1();
            if(x!=-1)
            printf("\n The value deleted from Queue 1 = %d", x);
            break;
            case 3:
            printf("\n Queue 1 : ");
            display1();
            break;
            case 4:
            printf("\n Enter the value to be inserted in Queue 2 : ");
            scanf("%d",&x);
            insert2(x);
            break;
            case 5:
            x=delete2();
            if(x!=-1)
            printf("\n The value deleted from Queue 2 = %d",x);
            break;
            case 6:
            printf("\n Queue 2: ");
            display2();
            break;
        }
    }while(choice!=7);
}
void insert1(int x){
    if(rear1==rear2-1){
        printf("\n OVERFLOW");
    }
    else{
        if(rear1==-1 && front1==-1){
            rear1=front1=0;
            que[rear1]=x;
        }
        else{
            que[++rear1]=x;
        }
    }
}
int delete1(){
    int x;
    if(front1==-1){
        printf("\n UNDERFLOW");
        return -1;
    }
    else{
        x=que[front1];
        front1++;
        if(front1>rear1){
            front1=rear1=-1;
        }
        return x;
    }
}
void display1(){
    if(front1==-1){
        printf("\n QUEUE 1 IS EMPTY");
    }
    else{
        for(i=front1;i<=rear1;i++)
        printf("%d ", que[i]);
    }
}
void insert2(int x){
    if(rear1==rear2-1){
        printf("\n OVERFLOW");
    }
    else{
        if(rear2==max && front2==max){
            rear2=front2=max-1;
            que[rear2]=x;
        }
        else{
            que[--rear2]=x;
        }
    }
}
int delete2(){
    if(front2==max){
        printf("\n UNDERFLOW");
        return -1;
    }
    else{
        x=que[front2];
        front2--;
        if(front2<rear2){
        front2=rear2=max;
        }
        return x;
    }
}
void display2(){
    if(front2==max){
        printf("\n QUEUE 2 IS EMPTY");
    }
    else{
        for(i=front2;i>=rear2;i--){
            printf("%d ",que[i]);
        }
    }
}