#include <stdio.h>
#include <stdlib.h>

int main () {

int merc[4],qtd=0,op,totalprod=0,somatotal=0;
char voltar;

printf("produto 1- 2 reais \n\n produto 2- 9 reais \n\n produto 3- 5 reais \n\n produto 4- 6 reais \n");

printf("Escolha um dos produtos");
    scanf("%d",&op);

    switch(op) {

        case 1:
            totalprod=qtd*2;
            somatotal=somatotal+totalprod;
                printf("Quantos vendidos?");
                    scanf("%d",&qtd);

                break;

        case 2:
            totalprod=qtd*9;
            somatotal=somatotal+totalprod;
                printf("Quantos vendidos?");
                    scanf("%d",&qtd);

                break;
        case 3:
            totalprod=qtd*5;
            somatotal=somatotal+totalprod;
                printf("Quantos vendidos?");
                    scanf("%d",&qtd);

                break;
        case 4:
            totalprod=qtd*6;
            somatotal=somatotal+totalprod;
                printf("Quantos vendidos?");
                    scanf("%d",&qtd);

                break;

        default:
            printf("produto incorreto");

            }



printf("soma total dos produtos foi %d ",somatotal);

return 0;
}
