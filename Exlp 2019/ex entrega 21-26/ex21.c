/* 21) Ler a hora de in�cio e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
minutos) e calcule a dura��o do jogo em horas, sabendo-se que o tempo m�ximo de dura��o do jogo �
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. */

#include <stdio.h>
#include <stdlib.h>

int main () {

int ini,fim,htotal;

printf ("Digite a hora de inicio do jogo");
scanf ("%d",&ini);

printf ("digite a hora de termino do jogo");
scanf ("%d",&fim);

htotal= ( (24-ini)+fim );

if (htotal>24) {

    printf("O jogo ultrapassou 24 horas");
}
        else
            printf("a dura��o do jogo foi de %d horas",htotal);







return 0;
}
