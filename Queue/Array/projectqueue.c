#include <stdio.h>
void insert(int arr[], int n);
void display(int arr[]);
int front=-1, rear=-1, n, i;
int main(){
    int e, ch;
    printf("Enter size of array");
    scanf("%d", &n);
    int queue[n];
    do{
        printf("\nWhat do you want to do:\n1 for insert\n2 for delete\n3 for display\n4 for exit");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            insert(queue, n);
            break;
            /*case 2:
            value=pop(stack);
            if(value!=-1){
                printf("%d\n", value);
            }
            else if(value==-1){
                if(top!=-1){
                    printf("%d", value);
                }
            }
            break;*/
            case 3:
            display(queue);
            break;
        }
    }while(ch!=4);
    return 0;
}
void insert(int arr[], int n){
    int front=-1, rear=-1;
    if(rear==n-1){
        printf("Overflow");
    }
    else{
        if(front==-1){
            rear++;
            printf("Enter data");
            scanf("%d", &arr[rear]);
            front=rear;
        }
        else{
            rear++;
            printf("Enter data");
            scanf("%d", &arr[rear]);
        }
    }
}
void display(int arr[]){
    for(i=0; i<=rear; i++){
        printf("%d ", arr[i]);
    }
}