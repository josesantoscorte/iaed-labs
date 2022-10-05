#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char buffer[256], *input;
    int i, len;

    scanf("%s", buffer);
    len = strlen(buffer);
    
    input = (char*) malloc(len * sizeof(char));
    strcpy(input, buffer);

    for(i = 0; i < len; i++)
    {
        printf("%s\n", (input+i));
    }

    return 0;
}