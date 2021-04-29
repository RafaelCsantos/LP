#include <stdio.h>

int main () {

float sa,re;


printf("digite o salario atual \n ");
scanf("%f",&sa);

printf("Digite o percentual de reajuste \n");
scanf("%f",&re);


printf("O salario final e %2.2f",(sa*re)+sa);
















return 0;
}
