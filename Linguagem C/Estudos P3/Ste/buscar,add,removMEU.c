#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1

struct turma {

char nome[20];
int RA;
float nota;

}turma[MAX];


int main () {

int op,n=0,i,RA,cont=0;

do {

printf("Digite qual operacao quer fazer \n 1- cadastrar \n 2-visualizar \n 3-apagar \n 4-buscar \n");
    scanf("%d",&op);

switch(op) {
        case 1:

            if (n<MAX) {

                printf("\n nome do aluno: \n");
                    scanf("%s",&turma[n].nome);
                        printf("\n RA do aluno");
                            scanf("%d",&turma[n].RA);
                                printf("digite a nota \n");
                                    scanf("%f",&turma[n].nota);
                                            n++;

            }
                else
                        printf("turma cheia");
                break;

        case 2:
                if (n>0) {
                            for (i=0; i<n; i++) {
                                printf("Nome %s \n",turma[i].nome);
                                printf("RA %d \n",turma[i].RA);
                                printf("NOTA %f \n",turma[i].nota);

                                printf("\n \n");

                            }
                }
                    else
                        printf("nao ha registro");
                break;
        case 3:
            break;
        case 4:
                cont=0;
                printf("digite o RA");
                    scanf("%d",&RA);
            for (i=0; i<n; i++) {
                    if (RA==turma[i].RA) {
                        cont=1;
                            printf("Nome %s \n",turma[i].nome);
                            printf("RA  %d \n",turma[i].RA);
                            printf("NOTA %f \n",turma[i].nota);
                    }

                        break;
            }

                    if (cont==0)
                         printf("nao encontrado \n");


}
} while (op!=-1);

return 0;
}
