#include <stdio.h>

#define DIM 100

int main(){
    int c, i = 0, inside = 0;
    int string[DIM];

    c = getchar();
    while(c != EOF && c != 'q'){
        if(c != '0' && c != '\n' && c != ' '){
            string[i] = c;
            inside = 1;
        } else {
            if(c == '\n' || c == ' '){
                string[i] = c;
                inside = 0;
            } else {
                
            }

    }
    }

    return 0;
}