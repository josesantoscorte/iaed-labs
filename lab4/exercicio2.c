#include <stdio.h>

#define DIM 100

int main(){
    int n, i, k;
    int vec[DIM];

    printf("n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }

    for(i = 0; i < n; i++){
        for(k = 1; k <= vec[i]; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}