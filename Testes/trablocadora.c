#include <stdio.h>


int main () {


float fat,qtdfitas,vf,estrag,rep;


printf("Digite a quantidade de fitas");
scanf ("%f",&qtdfitas);

printf("Digite o valor do aluguel das fitas");
scanf ("%f",&vf);

fat=vf*(qtdfitas/3);




printf("O faturamento mensal eh %2.2f \n \n",fat);

printf("o valor ganho com multas foi de %2.2f \n \n",fat*0.10);

estrag=(qtdfitas*0.02);

rep=(qtdfitas-estrag)*0.10;

printf("As fitas estragadas sao %f \n \n",estrag);

printf("As fitas repostas sao %f \n \n",rep);


return 0;
}
