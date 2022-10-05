#include <stdio.h>

int main(){
    int num1, num2;

    printf("Num 1: ");
    scanf("%d", &num1);

    printf("Num 2: ");
    scanf("%d", &num2);
    
    if (num1 % num2 == 0){
        printf("yes \n");
    }
    else {
        printf("no \n");
    }

    return 0;
}