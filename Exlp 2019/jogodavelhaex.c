#include <stdio.h>
#include <stdlib.h>



void visual(char tabuleiro2[3][3])
{
    /* Tabuleiro */
    system("cls");
    printf("\t %c | %c | %c  \n",tabuleiro2[0][0],tabuleiro2[0][1],tabuleiro2[0][2]);
    printf("\t ---------\n");
    printf("\t %c | %c | %c  \n",tabuleiro2[1][0],tabuleiro2[1][1],tabuleiro2[1][2]);
    printf("\t ---------\n");
    printf("\t %c | %c | %c  \n",tabuleiro2[2][0],tabuleiro2[2][1],tabuleiro2[2][2]);
}

int main()
{
    char tabuleiro[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}
    };

    char resp;
    int cont_x=1,lin,col,vez=0,i,j;

    /*Limpar tabuleiro*/

    do
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                tabuleiro[i][j]=' ';
            }
        }

        /*Jogada */



        do
        {
            visual(tabuleiro);
            if(vez%2==0)
            {
                printf("\n ***** BEM VINDO AO JOGO DA VELHA ***** \n \n Voce e o jogador X! \n");
            }
            else
            {
                printf("\n ***** BEM VINDO AO JOGO DA VELHA ***** \n \n Voce e o jogador O! \n");
            }

            printf("\n \n ESCOLHA A JOGADA \n \n  Linha:");
            scanf("%i", &lin);
            printf("\n Coluna: \n ");
            scanf("%i", &col);


            /*Jogadas Inválidas */



            if(lin < 1 || col < 1 || lin > 3 || col > 3 )
            {
                lin=0;
                col=0;
            }
            else if(tabuleiro[lin-1][col-1] != ' ')
            {
                lin=0;
                col=0;
            }
            else /*Jogada válida */
            {
                if(vez%2==0)
                {
                    tabuleiro[lin-1][col-1]='X';
                }
                else
                {
                    tabuleiro[lin-1][col-1]='O';
                }


                vez++;
                cont_x++;
            }
        }


        while(cont_x<=9);
        visual(tabuleiro);


        printf("\n ***** JOGAR NOVAMENTE? [s ou n] ***** \n");
        scanf("%s",&resp);


        }while(resp=='s');

     }
