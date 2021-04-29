#include <stdio.h>
#include <stdlib.h>

int main () {

char nome[20], sexo;
float altura, peso_ideal;

printf ("digite o nome");
scanf("%s",&nome);

printf("digite a altura");
scanf("%f",&altura);

printf("digite o sexo");

scanf("%s",&sexo);

if (sexo=='m') {

peso_ideal=(72.7*altura) - 58;

printf("Peso ideal e %f",peso_ideal);

}
else
    peso_ideal=( (62.1*altura) -44.7) ;

        printf("Peso ideal e %f",peso_ideal);





return 0;
}
