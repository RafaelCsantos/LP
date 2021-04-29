#include <stdio.h>

int main () {

float salfix,comfix,carvend,comcarvend,comvendas,tvendas;

printf("Digite o salario fixo");
scanf ("%f",&salfix);

printf("digite o numero de carros vendidos");
scanf ("%f",&carvend);

printf("Digite qual a comissao por carro vendido");
scanf("%f", &comfix);
comfix=(carvend*comfix);

printf("Digite o valor total das vendas");
scanf("%f",&tvendas);
printf("O salario final eh %2.2f",(comfix+salfix)+tvendas*0.05);














return 0;
}
