#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {

int i;


struct teste {

char nome[20];
int i,n;


};


struct teste classe[2];


for (i=0; i<2; i++) {

printf("digite o nome [%d]",i);
    scanf("%s",classe[i].nome);

        printf("digite o codigo");
            scanf("%d",&classe[i].n);
    }


        for (i=0; i<2; i++) {
                printf("%s \n",classe[i].nome);
                    printf("%d \n",classe[i].n);
        }


int cont=0,busca;

printf("digite o codigo pra buscar");
    scanf("%d",&busca);

    for (i=0; i<2; i++) {
if (busca==classe[i].n) {
        printf("Encontrado \n \n %s \n %d",classe[i].nome, classe[i].n);
        cont=1;
}

    }
        if (cont==0)
            printf("nao encontrado");








return 0;
}
