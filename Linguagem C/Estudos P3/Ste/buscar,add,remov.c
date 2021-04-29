// Exercício de inserir, remover e buscar uma struct

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

struct dados{
  char nome [100];
  char RA [9];
  float nota;
  float freq;

} ;//aluno[TAM];



struct dados aluno[TAM];

// Declaração das funções

void imprime (void);
void cadastro (struct dados aluno, int i);
void busca (struct dados aluno);

// Menu na main

int main ()
{
  int i, escolha;
    while (escolha != 4)
    {
      imprime();
      scanf("%d", &escolha);

      switch (escolha)
      {
        case 1:
        cadastro (aluno, i);
        break;
        case 2:
        busca (aluno);
        break;
        case 3:
        remover ();
        break;
        case 4:
        break;
        default:
        printf ("\n Operação inválida!");
        break;
      }
    }
}

void imprime (void)
{
  printf ("\t**********\n");
    printf ("\t*  \tBem-vindo(a)!\t       *\n");
    printf ("\t**********\n");
    printf ("\t*    Escolha uma opcao:    *\n");
    printf ("\t*  1-Cadastro\t\t          *\n");
    printf ("\t*  2- Buscar e visualizar\t*\n");
    printf ("\t*  3-Remover               *\n");
	printf ("\t*  4-Sair\t\t              *\n");
    printf ("\t**********\n");
}

// Insere

void cadastro (struct dados *aluno, int i)
{

  for (i = 0; i < TAM; i++)
  {
    printf ("\n Nome: \n");
    fflush(stdin);
    fgets (aluno[i].nome, 100, stdin);

    printf ("\n RA: \n");
    fflush (stdin);
    fgets (aluno[i].RA, 9, stdin);

    printf ("\n Nota");
    fflush(stdin);
    scanf ("%f", &aluno[i].nota);

    printf ("\n Frequência");
    fflush(stdin);
    scanf ("%f", &aluno[i].freq);

    printf ("\n Cadastro feito com sucesso!\n");

    break;
  }

}

// Remove

void remover (struct dados *aluno, int i)
{
  int j;

	for(j=i;j<TAM;j++){
    aluno[j] = aluno[j+1];

    getchar();
    break;
}
printf ("\n Removido com sucesso \n" );
}

// Busca

void busca (struct dados *alunos)
{
  int i;
  char buscaRA[9];

  printf ("\n O RA a ser buscado: ");
  fflush (stdin);
    fgets (buscaRA, 9, stdin);
    printf ("\n %s \n", buscaRA);



   for (i = 0 ; i < TAM; i++)
   {
     if (buscaRA != '/0' && aluno[i].RA != '/0');
        {

            if (strcmp (buscaRA, aluno[i].RA)== 0)
            {
                printf ("\n DADOS PESSOAIS: \n");
                printf ("\n Nome: %s", aluno[i].nome);
                printf ("\n Nota: %f", aluno[i].nota);
                printf ("\n Freq: %f", aluno[i].freq);
            }

        }


     }
}
