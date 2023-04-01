#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *removes(struct node *start, int val) {
   struct node  *prev = NULL, *ptr = start;
    while (ptr != NULL) {
        if (ptr->data == val) {
            if (prev == NULL) {
                start = ptr->next;
                } 
            else {
                    prev->next = ptr->next;
                }
            struct node *temp = ptr;
            ptr = ptr->next;
            free(temp);
            } 
        else {
            prev = ptr;
            ptr = ptr->next;
        }
        }
         return start;
            }
            int main() {
                struct node *head = malloc(sizeof(struct node));
                head->data = 1;
                head->next = malloc(sizeof(struct node));
                head->next->data = 2;
                head->next->next = malloc(sizeof(struct node));
                head->next->next->data = 3;
                head->next->next->next = NULL;
                printf("Before:\n");
                for (struct node *ptr = head; ptr != NULL; ptr = ptr->next) {
                    printf("%d ", ptr->data);
        }
        printf("\n");
        head = removes(head, 1);
        printf("After:\n");
        for (struct node *ptr = head; ptr != NULL; ptr = ptr->next) {
            printf("%d ", ptr->data);
    }
    printf("\n");
    return 0;
}