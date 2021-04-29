#include <stdio.h>
#include <stdlib.h>

int main () {

char comb;
float valor,litros;

printf("Digite qual o tipo de combustivel desejado; A-Alcool, G-Gasolina");
        scanf("%c",&comb);

        printf("digite a quantidade de combustivel comprado");
            scanf("%f",&litros);

    if (comb=='a') {

        printf("O valor total do alcool foi de %2.2f",litros*2.90);
    }
        else
            if (comb=='g') {

                printf("o valor total da gasolina foi de %2.2f",litros*3.30);
                }
                    else
                        printf("Alternativa incorreta");













return 0;
}
