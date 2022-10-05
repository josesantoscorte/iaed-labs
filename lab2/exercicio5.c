#include <stdio.h>

int main(){
    int num, temp;

    printf("Num = ");
    scanf("%d", &num);

    temp = 1;
    while (temp <= num){
        printf("%d \n", temp);
        ++temp;
    }

    return 0;
}