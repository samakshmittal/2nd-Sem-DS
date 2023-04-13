#include <stdio.h>
#define max 100
void insert1();
void insert2();
void display1();
void display2();
void compare();
int front1=-1, rear1=-1, front2=-1, rear2=-1, i;
int queue1[max], queue2[max];
int main(){
    int e, ch;
    do{
        printf("\nWhat do you want to do:\n1 for insert in queue 1\n2 for display queue 1\n3 for insert in queue 2\n4 for display queue 2\n5 for comparison of two queues\n6 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            insert1();
            break;
            case 2:
            display1();
            break;
            case 3:
            insert2();
            break;
            case 4:
            display2();
            break;
            case 5:
            compare();
            break;
        }
    }while(ch!=6);
    return 0;
}
void insert1(){
    if(rear1==max-1){
        printf("Overflow");
    }
    else{
        if(front1==-1){
            rear1++;
            printf("Enter data");
            scanf("%d", &queue1[rear1]);
            front1=rear1;
        }
        else{
            rear1++;
            printf("Enter data");
            scanf("%d", &queue1[rear1]);
        }
    }
}
void display1(){
    printf("Queue 1 : ");
    if(front1!=-1){
        for(i=front1; i<=rear1; i++){
            printf("%d ", queue1[i]);
        }
    }
    else{
        printf("Queue 1 is empty");
    }
}
void insert2(){
    if(rear2==max-1){
        printf("Overflow");
    }
    else{
        if(front2==-1){
            rear2++;
            printf("Enter data");
            scanf("%d", &queue2[rear2]);
            front2=rear2;
        }
        else{
            rear2++;
            printf("Enter data");
            scanf("%d", &queue2[rear2]);
        }
    }
}
void display2(){
    printf("Queue 2 : ");
    if(front2!=-1){
        for(i=front2; i<=rear2; i++){
            printf("%d ", queue2[i]);
        }
    }
    else{
        printf("Queue 2 is empty");
    }
}
void compare(){
    int flag=0;
    if((rear1-front1)==(rear2-front2)){
        int t=front1, u=front2;
        for(t=front1, u=front2; t<=rear1, u<=rear2; t++, u++){
            if(queue1[t]!=queue2[u]){
                flag=1;
                break;
            }
        }
    }
    else{
        flag=1;
    }
    if(flag==0){
        printf("Queue 1 and Queue 2 are equal");
    }
    else if(flag==1){
        printf("Queue 1 and Queue 2 are not equal");
    }
}