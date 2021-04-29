#include <stdio.h>

int main () {

float vm,ckm,l,kmrodados,tempo,comb;

printf("digite a velocidade media que o carro anda em km/h");
scanf("%f",&vm);

printf("Por quanto tempo voce vai dirige?");
scanf("%f",&tempo);

kmrodados=(vm*tempo);

printf("digite o consumo medio por km");
scanf ("%f",&ckm);

printf ("Qual o Preco do litro do combustivel?");
scanf ("%f",&l);

comb=((l*kmrodados)/ckm);


printf("Com a velocidade media de %2.2f \t \n em %2.2f horas voce anda %2.2f km e gasta %f",vm,tempo,kmrodados,comb);






return 0;
}
