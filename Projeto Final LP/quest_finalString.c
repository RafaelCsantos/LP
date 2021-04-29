#include <stdio.h>
#include <string.h>

int tema1 (int escolha) {
int rc=0,re=0,v;
char resposta[30],certa[30];


printf("o tema escolhido foi Teste 1 \n \n \n");
        printf("Pergunta 1: abc \n");

        fgets(certa,30,stdin);
        fflush(stdin);

        fgets(resposta,30,stdin);
        if (strcmp(resposta,certa)==0 ) {
                printf("UHUUUUUU");

            rc=rc+1;
        }
            else
                printf("errou");
            {re=re+1; }

        printf("Pergunta 2: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else  {re=re+1; }

        printf("Pergunta 3: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else {re=re+1;}

        printf("Pergunta 4: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else { re=re+1; }

        printf("Pergunta 5: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else { re=re+1; }

        printf("Pergunta 6: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else {re=re+1;}

        printf("Pergunta 7: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else {re=re+1;}

        printf("Pergunta 8: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else {re=re+1;}

        printf("Pergunta 9: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else {re=re+1;}

        printf("Pergunta 10: abc \n");
        scanf("%d",&v);
        if (v==123) {
            rc=rc+1;
        } else {re=re+1;}


            printf("Respostas certas %d \n ", rc);
                printf("repostas erradas %d \n",re);

                (float)rc/10;

                printf("Voce acertou %d% % das repostas",rc*10);

}

int tema2 (int escolha) {
    printf("o tema escolhido foi Teste 2 \n \n \n");

        printf("Pergunta 1: \n");
        printf("Pergunta 2: \n");
        printf("Pergunta 3: \n");
        printf("Pergunta 4: \n");
        printf("Pergunta 5: \n");
        printf("Pergunta 6: \n");
        printf("Pergunta 7: \n");
        printf("Pergunta 8: \n");
        printf("Pergunta 9: \n");
        printf("Pergunta 10:\n");




}

int tema3 (int escolha) {
      printf("o tema escolhido foi Teste 3 \n \n \n");

        printf("Pergunta 1: \n");
        printf("Pergunta 2: \n");
        printf("Pergunta 3: \n");
        printf("Pergunta 4: \n");
        printf("Pergunta 5: \n");
        printf("Pergunta 6: \n");
        printf("Pergunta 7: \n");
        printf("Pergunta 8: \n");
        printf("Pergunta 9: \n");
        printf("Pergunta 10:\n");



}

int tema4 (int escolha) {

printf("o tema escolhido foi Teste 4 \n \n \n");

        printf("Pergunta 1: \n");
        printf("Pergunta 2: \n");
        printf("Pergunta 3: \n");
        printf("Pergunta 4: \n");
        printf("Pergunta 5: \n");
        printf("Pergunta 6: \n");
        printf("Pergunta 7: \n");
        printf("Pergunta 8: \n");
        printf("Pergunta 9: \n");
        printf("Pergunta 10:\n");




}


int tema5 (int escolha) {

        printf("o tema escolhido foi Teste 5 \n \n \n");


        printf("Pergunta 1: \n");
        printf("Pergunta 2: \n");
        printf("Pergunta 3: \n");
        printf("Pergunta 4: \n");
        printf("Pergunta 5: \n");
        printf("Pergunta 6: \n");
        printf("Pergunta 7: \n");
        printf("Pergunta 8: \n");
        printf("Pergunta 9: \n");
        printf("Pergunta 10:\n");




}

int tema6 (int escolha) {

        printf("o tema escolhido foi Teste 6 \n \n \n");

        printf("Pergunta 1: \n");
        printf("Pergunta 2: \n");
        printf("Pergunta 3: \n");
        printf("Pergunta 4: \n");
        printf("Pergunta 5: \n");
        printf("Pergunta 6: \n");
        printf("Pergunta 7: \n");
        printf("Pergunta 8: \n");
        printf("Pergunta 9: \n");
        printf("Pergunta 10:\n");






}
int main() {

int escolha, resp[10];
char resposta[30];


printf("Questionario sobre assuntos diversos: \n \n ");


printf("Selecione o assunto: \n 1\n 2\n 3\n 4\n 5\n 6\n");

scanf("%d",&escolha);

switch(escolha) {

case 1:
    return tema1(escolha);
        break;
case 2:
     return tema2(escolha);
        break;
case 3:
     return tema3(escolha);
        break;
case 4:
     return tema4(escolha);
        break;
case 5: return tema5(escolha);
        break;
case 6: return tema6(escolha);
        break;

default:
    printf("opção incorreta \n");
    return main();
}
return 0;


}


