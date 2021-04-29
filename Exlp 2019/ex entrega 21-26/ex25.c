#include <stdio.h>
#include <stdlib.h>

int main () {

int numconta;
float s,d,c,st;


printf("Digite o numero da sua conta");
scanf("%d",&numconta);

printf("Digite o saldo da conta atualmente");
scanf("%f",&s);

printf("Digite o débito a ser utilizado da conta");
scanf("%f",&d);

printf("Digite o credito a ser adicionado na conta");
scanf("%f",&c);

st=((s-d)+c);

if (st>=0) {

    printf("O saldo atual eh positivo, no valor de %2.3f",st);
     }
        else
            printf("O saldo atual eh negativo, no valor de %2.3f",st);
















return 0;

}
