#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,opcao,n=0,RA,cont=0;
    struct aluno{
        char nome[30];
        int RA;
        float notas[3];
        int freq;
    };

    struct aluno turmaLP[50];

    do{
        printf("\n\nMenu:");
        printf("\n1 - Inserir");
        printf("\n2 - Remover");
        printf("\n3 - Visualizar");
        printf("\n4 - Buscar");
        printf("\n-1 - Finalizar");
        printf("\nOpcao: ");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                if(n<50){
                    printf("Nome: ");
                    scanf("%s",turmaLP[n].nome);
                    printf("RA: ");
                    scanf("%d",&turmaLP[n].RA);
                    for(j=0;j<3;j++){
                        printf("Nota %d: ",j+1);
                        scanf("%f",&turmaLP[n].notas[j]);
                    }
                    printf("Freq: ");
                    scanf("%d",&turmaLP[n].freq);
                    n++;
                }
                else
                    printf("\nTurma cheia.");
                break;
            case 2:
                break;
            case 3:
                if(n>0){
                    for(i=0;i<n;i++){
                        printf("\n\nNome: %s",turmaLP[i].nome);
                        printf("\nRA: %d",turmaLP[i].RA);
                        for(j=0;j<3;j++){
                            printf("\nNota %d: %.2f",j+1,turmaLP[i].notas[j]);
                        }
                        printf("\nFreq: %d",turmaLP[i].freq);
                    }
                }
                else
                    printf("\nTurma vazia.");
                break;
            case 4:
                if(n>0){
                    cont=0;
                    printf("\nRA: ");
                    scanf("%d",&RA);
                    for(i=0;i<n;i++){
                        if(RA==turmaLP[i].RA){
                            cont=1;
                            printf("\n\nNome: %s",turmaLP[i].nome);
                            printf("RA: %d",turmaLP[i].RA);
                            for(j=0;j<3;j++){
                                printf("\nNota %d: %.2f",j+1,turmaLP[i].notas[j]);
                            }
                            printf("\nFreq: %d",turmaLP[i].freq);
                            break;
                        }
                    }
                    if(cont==0)
                        printf("\nAluno nao encontrado.");
                }
                else
                    printf("\nTurma vazia.");
                break;
            case -1:
                break;
            default:
                printf("\nOpcao invalida.");
        }

    }while(opcao!=-1);

    return 0;
}
