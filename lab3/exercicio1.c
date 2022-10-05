#include <stdio.h>

void quadrado(int num){
    int i, j;
    for(i = 1; i <= num; i++){
        for (j = i; j <= (i + num - 1); j++){
            printf("%d\t", j);
        }
    printf("\n");
    }
}

int main(){
    int num;
    printf("Num = ");
    scanf("%d", &num);
    quadrado(num);
    return 0;
}

