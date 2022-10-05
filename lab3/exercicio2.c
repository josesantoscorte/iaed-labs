#include <stdio.h>

void piramide(int num){
    int i, k;
    for(i = 1; i <= num; i++){
        for(k = 1; k < num + 1 - i; k++){
            printf("  ");
        }
        for(k = 1; k < i; k++){
            printf("%d ", k);
        }
        printf("%d ", i);
        for(k = i -1; k >= 1; k--){
            printf("%d ", k);
        }
        printf("\n");   
    }
}

int main(){
    int num;
    printf("Num = ");
    scanf("%d", &num);
    piramide(num);

    return 0;
}
