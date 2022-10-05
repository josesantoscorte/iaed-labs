#include <stdio.h>

int main(){
    int n;
    float min = FLT_MAX, max = -FLT_MAX, v;
    scanf("%d", &n);

    while(n--) {
        scanf("%f", &v);
        min = (min < v) ? min : v;
        max = (max > v) ? max : v;

    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}