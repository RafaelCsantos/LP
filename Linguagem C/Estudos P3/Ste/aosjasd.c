#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;
};

int numDias(struct data,struct data);

int main()
{
    struct data data1, data2;

    data1.dia = 5;
    data1.mes = 10;
    data1.ano = 2019;

    data2.dia = 20;
    data2.mes = 10;
    data2.ano = 2019;

    printf("Numero de dias: %d",numDias(data1,data2));

    return 0;
}

int numDias(struct data d1,struct data d2){

    return d2.dia-d1.dia;
}
