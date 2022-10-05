#include <stdlib.h>
#include <stdio.h>
#include "list.h"

/* remove the first element of the list and return the new head */
node * pop(node * head)
{
    node* new = head->next;
    free(head);
    return new;
}
/* add integer e as the first element of the list and return the new head */
node * push(node * head, int e)
{
    node* new = malloc(sizeof(node));
    new->v = e;
    new->next = head;
    return new;
}
/* frees all memory associated with the list and returns NULL */
node * destroy(node * head)
{
    while(head)
    return NULL;
}
/* print the elements of the integers in the list, one per line */
void print(node * head)
{
    for(; head; head = head->next)
        printf("%d\n", head->v);
}