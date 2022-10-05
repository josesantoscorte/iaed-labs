#include <stdio.h>

int main() {
    int num, temp, dig = 0, sum = 0;

    printf("Num = ");
    scanf("%d", &num);

    int numinit = num;

    while (num > 0) {
        temp = num % 10;
        sum += temp;
        dig++;
        num = num / 10;
        }
    
    printf("O número %d tem %d digitos e a soma desses digitos é %d \n", numinit, dig, sum);

    return 0;
}