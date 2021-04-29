#include <stdio.h>
#include <stdio.h>


struct data {
int dia,mes,ano;
};

struct data data1,data2;



struct data passados (struct data data1, struct data data2) {
    struct data datafinal;

if (data2.dia>data1.dia) {
datafinal.dia=(data2.dia-data1.dia);
}
    else
datafinal.dia=(data1.dia-data2.dia);

if (data2.mes>data1.mes) {
datafinal.dia=(data2.mes-data1.mes);
}
else
    datafinal.mes=(data1.mes-data2.mes);

if (data2.ano > data1.ano) {
datafinal.ano=(data2.ano-data1.ano);
}
    else
        datafinal.dia=(data1.ano-data2.ano);

return datafinal.dia;

}




int main () {

data1.dia=10;
data1.mes=3;
data1.ano-2000;

data2.dia=20;
data2.mes=4;
data2.ano=2010;


printf("Passaram %d dias %d meses %d anos",passados(data1,data2));



return 0;
}
