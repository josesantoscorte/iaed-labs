#include <stdio.h>

int main(){
    int i, num, count = 2;

    printf("Inteiro = ");
    scanf("%d", &num);

    for(i = 2; i != num; ++i){
        if((num % i) == 0)count++;
    }

    printf("O Inteiro %d tem %d divisores", num, count);

    return 0;
}