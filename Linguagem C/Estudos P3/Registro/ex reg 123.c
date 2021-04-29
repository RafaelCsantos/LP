#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2

struct dados {

char nome[40];
int ra,frequencia;
float nota;
}aluno[MAX];


int main () {

int op,n=0,cont=0,i,ra;

do {

printf ("Digite o que deseja fazer \n \n 1-------------Cadastrar aluno \n 2----------Listar alunos \n 3------------Pesquisar alunos \n 4--------------apagar \n  -1------------ fechar");

scanf("%d",&op);

switch (op) {

case 1:
        if (n<MAX) {

    printf("Digite o nome");
    scanf ("%s",&aluno[n].nome);

    printf("digite o RA");
        scanf("%d",&aluno[n].ra);

            printf("digite a frequencia");
                scanf ("%d",&aluno[n].frequencia);

                    printf("digite a nota");
                        scanf ("%f",&aluno[n].nota);
                            n++;
        }
            else
                printf("turma cheia \n \n");
    break;

case 2:
    if (n>0) {

        for (i=0; i<n; i++) {
                printf("Nome: %s \n",aluno[i].nome);
                    printf("RA: %d \n",aluno[i].ra);
                        printf("Frequencia: %d \n", aluno[i].frequencia);
                            printf("Nota: %f \n \n", aluno[i].nota);
                        }
    }
        else
                printf("nao ha alunos na turma \n \n");
                        break;

case 3:
if (n>0) {
    cont=0;
    printf("digite o RA");
        scanf("%d",&ra);
            for (i=0; i<n; i++) {

                    if (ra==aluno[i].ra) {
                        cont=1;
                        printf("Nome: %s \n",aluno[i].nome);
                    printf("RA: %d \n",aluno[i].ra);
                        printf("Frequencia: %d \n", aluno[i].frequencia);
                            printf("Nota: %f \n", aluno[i].nota);
                    }
            }
                    if (cont==0)
                        printf("aluno nao encontrado");

}

                    else
                            printf("turma vazia");

    break;
case 4:
case -1:
    return 0;
    break;
}

}while (op!=-1);


return 0;


}
