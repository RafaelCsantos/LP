/*22) A jornada de trabalho semanal de um funcion�rio � de 40 horas. O funcion�rio que trabalhar mais
de 40 horas receber� hora extra, cujo c�lculo � o valor da hora regular com um acr�scimo de 50%.
Escreva um algoritmo que leia o n�mero de horas trabalhadas em um m�s, o sal�rio por hora e escreva
o sal�rio total do funcion�rio, que dever� ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o m�s possua 4 semanas exatas). */

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
