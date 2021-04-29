#include <stdio.h>
#include <stdlib.h>

int main () {

float qtde,qtdmax,qtdmin,qtdmed;

    printf("Digite a quantidade atual do produto no estoque");
    scanf("%f",&qtde);

        printf("digite a quantidade maxima de produto no estoque");
        scanf("%f",&qtdmax);

            printf("digite a quantidade minima de produto no estoque");
                scanf("%f",&qtdmin);

qtdmed= ( (qtdmax+qtdmin)/2);

    if (qtde>=qtdmed) {
        printf("nao efetue a compra");
        }
            else
                printf("efetue a compra");








return 0;

}
