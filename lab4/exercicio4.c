#include <stdio.h>

#define DIM 80

int stringlen(char str[DIM]){
    int i = 0;
    char c;
    c = str[i]; 
    while(c != '\0'){
        i++;
        c = str[i];
    }
    return i;
}

int main(){
    char string[DIM];
    int i, j, len, error = 0;
    
    scanf("%s", string);
    
    len = stringlen(string);

    if((len - 1) % 2 == 0){
        for(i = 0; i <= ((len - 1) / 2); i++){
            for(j = len - 1; j > (len - 1) / 2); j--){
                if(string[i] != string[j]){
                    error = 1;
                }
            }
        }
    } else {

    }

    printf("yes") ? (error == 0) : printf("no");

    return 0;
}