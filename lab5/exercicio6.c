#include <stdio.h>

typedef struct{
        int dia;
        int mes;
        int ano;
    } Data;

Data readData(){
    Data d;
    scanf("%d-%d-%d", &d.dia, &d.mes, &d.ano);
    return d;
}

void printData(Data d){
    printf("%02d-%02d-%04d ", d.dia, d.mes, d.ano);
}

int main(){
    Data d1, d2;

    d1 = readData();
    d2 = readData();

    if(d1.ano < d2.ano || d1.mes < d2.mes || d1.dia < d2.dia){
        printData(d2);
        printData(d1); 
    } else {
        printData(d2);
        printData(d1); 
    }

    return 0;
}