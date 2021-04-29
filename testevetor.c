#include <stdio.h>

int main () {

int i=0, v[10];

for (i=0; i<=9; i++)
{
    printf("Digite um numero para a posicao %d : \n",i);
    scanf("%d",&v[i]);
}
    for (i=0; i<=9; i++) {

        printf("o numero da posicao %d eh %d \n",i,v[i]);

    }









return 0;
}
