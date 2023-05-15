#include <stdio.h>
#include <stdlib.h>
typedef struct node_HT
{
int value;
struct node *next;
}node;
node *hash_table[10];
void initializeHashTable (node *hash_table[],
int m)
{
int i;
for(i=0;i<=m;i++)
hash_table[i]=NULL;
}
node *insert_value( node *hash_table[], int
val)
{
    int x;
int h(x);
node *new_node;
new_node = (node *)malloc(sizeof(node));
new_node -> value = val; new_node ->next = hash_table[h(x)];
hash_table[h(x)] = new_node;
}
node *search_value(node *hash_table[],
int val)
{
    int x;
int h(x);
node *ptr;
ptr = hash_table[h(x)];
while ( (ptr!=NULL) && (ptr -> value
!= val))
ptr = ptr -> next;
if (ptr->value == val)
return ptr;
else
return NULL;
}
void delete_value (node *hash_table[], int val)
{int x;
int h(x);
node *save, *ptr;
save = NULL;
ptr = hash_table[h(x)];
while ((ptr != NULL) && (ptr->value != val))
{
save = ptr;
ptr = ptr->next;
}
if (ptr != NULL)
{
save->next = ptr->next;
free (ptr);
}
else
printf("\n VALUE NOT FOUND");
}
int main(){
    initializeHashTable(hash_table, 10);
    for(int i=0; i<10; i++){
        printf("%d", hash_table[i]);
    }
    insert_value(hash_table, 50010);
    insert_value(hash_table, 50013);
    insert_value(hash_table, 50015);
    for(int i=0; i<10; i++){
        printf("%d", hash_table[i]);
    }
    search_value(hash_table, 50010);
    for(int i=0; i<10; i++){
        printf("%d", hash_table[i]);
    }
    search_value(hash_table, 50012);
    for(int i=0; i<10; i++){
        printf("%d", hash_table[i]);
    }

}