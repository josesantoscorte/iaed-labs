#ifndef _LIST_
#define _LIST_

typedef struct stru_node {
    struct stru_node *next;
    int v;
} node;

/* remove the first element of the list and return the new head */
node * pop(node * head);
/* add integer e as the first element of the list and return the new head */
node * push(node * head, int e);
/* frees all memory associated with the list and returns NULL */
node * destroy(node * head);
/* print the elements of the integers in the list, one per line */
void print(node * head);

#endif