#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main()
{
    int v;
    node* h = NULL;

    while (1)
    {
        scanf("%d", &v);
        if(v == 0) break;
        h = push(h, v);
    }
    return 0;
}