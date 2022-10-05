#include <stdio.h>

typedef struct{
    int hora;
    int min;
} Time;

Time readTime(){
    Time t;
    scanf("%d:%d", &t.hora, &t.min);
    return t;
}

Time addTime(Time t1, Time t2){
    Time sum;
    sum.hora = t1.hora + t2.hora;
    sum.min = t1.min + t2.min;

    if(sum.min >= 60){
        sum.min -= 60;
        sum.hora++;
    }
    return sum;
}

void printTime(Time t){
    printf("%02d:%02d\n", t.hora, t.min);
}

int main(){
    Time t1, t2, sum;

    t1 = readTime();
    t2 = readTime();

    sum = addTime(t1, t2);

    printTime(sum);

    return 0;
}