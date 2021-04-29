/*22) A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva
o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o mês possua 4 semanas exatas). */

#include <stdio.h>
#include <stdlib.h>

int main () {

float htrab,sal,saltotal,he;

printf ("digite a quantidade de horas trabalhadas");
scanf ("%f",&htrab);

printf ("digite seu salario por hora");
scanf ("%f",&sal);

if (htrab>40) {
    he=htrab-40;

    printf ("O Salario final com  %f horas extras eh %f", he, (sal*htrab)+ ( (sal*he)*0.5) );

}
    else
        printf ("o saario final sem hora extra eh de %f", (sal*htrab));






return 0;
}
