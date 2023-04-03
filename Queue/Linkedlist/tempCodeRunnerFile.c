else if(front==rear){
        front=rear=NULL;
        printf("Deleted element is : %d", ptr->data);
        free(ptr);
    }