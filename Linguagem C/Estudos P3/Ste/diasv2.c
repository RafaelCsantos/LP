#include <stdio.h>
#include <stdlib.h>

struct data {

int dias, mes, ano;

}dias1, dias2;

struct data calcdias (struct data, struct data);

int main () {

printf ("digite o dia inicial");
    scanf("%d",&dias1.dias);
printf("digite o mes inicial");
    scanf("%d",&dias1.mes);
printf("digite o ano inicial");
    scanf("%d",&dias1.ano);

printf ("digite o dia final");
    scanf("%d",&dias2.dias);
printf("digite o mes final");
    scanf("%d",&dias2.mes);
printf("digite o ano final");
    scanf("%d",&dias2.ano);

printf("numero de dias entre essas datas dias: %d \n meses: %d \n  anos: %d \n ",calcdias(dias1,dias2));


return 0;
}

struct data calcdias (struct data d1, struct data d2) {

struct data resul;

resul.dias=(d2.dias-d1.dias);
resul.mes=(d2.mes-d1.mes);
resul.ano=(d2.ano-d1.ano);

return resul;



}
