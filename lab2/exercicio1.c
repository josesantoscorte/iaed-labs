#include <stdio.h>

int main(){
    int num1, num2, num3;
    int min, mid, max;

    printf("Num 1: ");
    scanf("%d", &num1);

    printf("Num 2: ");
    scanf("%d", &num2);
    
    printf("Num 3: ");
    scanf("%d", &num3);

    if (num1 < num2){
        if (num1 < num3){
            min = num1;
            if (num2 < num3){
                mid = num2;
                max = num3;    
            }
            else {
                max = num2;
                mid = num3;
            }
        }
        else {
            min = num3;
            mid = num1;
            max = num2;
        }
    }

    printf("Min = %d, Mid = %d, Max = %d", min, mid, max);

    return 0;
}

