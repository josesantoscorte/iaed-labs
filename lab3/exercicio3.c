#include <stdio.h>

void cruz(int num){
    int i, j;
    for(i = 1; i <= num; i++){
        for(j = 1; j <= num; j++){
            if((j == i) || (j + i == num + 1)){
                printf("* ");
            } 
            else {
                printf("- ");    
            }
        }
        printf("\n");
    }
}

int main(){
    int num;
    printf("Num = ");
    scanf("%d", &num);
    cruz(num);
    return 0;
}