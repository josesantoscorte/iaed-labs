#include <stdio.h>

#define DIM 100

int main(){
    int c, op;
    int num = 0;
    float res = 0;

    op = '+';

    while(c != '\n'){

        c = 0;
        num = 0;

        while(c != ' ' && c != '\n'){
            c = getchar();
            if (c != ' ' && c != '\n') {
                num = num * 10 + c - '0';
            }
        }

        if(op == '+')
            res = res + num;
        if(op == '-')
            res = res - num;
        if(op == '*')
            res = res * num;
        if(op == '/')
            res = res / num;


        if(c != '\n'){
            op = getchar();
            c = getchar();   
        }
    }

    printf("%.1f", res);
    return 0;
}