#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Variaveis
int tema1 (int escolha) {
int rc=0,re=0,v,m,i,j,vetor[10],r,x;
//Gerar vetor nao aleatorio
srand(time(NULL));
for (i=0; i<10; i++) {
        do {
            vetor[i]=rand() %10 +1;
            r=0;
                for (j=0; j<i; j++) {
                    if(vetor[i] ==  vetor[j] ) {
                        r=1;
                        break;
                    }
                }
                }while(r);
                }

    for(i=0; i<10; i++){
    x=vetor[i];
    printf("%d \n ",x);
// perguntas

        printf("Pergunta 1: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n"); }

        printf("Pergunta 2: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n ");
        } else  {re=re+1; printf("resposta errada \n \n \n"); }

        printf("Pergunta 3: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("reposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n");}

        printf("Pergunta 4: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else { re=re+1;printf("resposta errada \n \n \n"); }

        printf("Pergunta 5: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else { re=re+1;printf("resposta errada \n \n \n"); }

        printf("Pergunta 6: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n");}

        printf("Pergunta 7: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n");}
        printf("Pergunta 8: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n");}
        printf("Pergunta 9: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1; printf("resposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n");}
        printf("Pergunta 10: abc \n");
        printf("1 - asodoasdjsa \n");
        printf("2 - asodoasdjsa \n");
        printf("3 - asodoasdjsa \n");
        printf("4 - asodoasdjsa \n");
        scanf("%d",&v);
        if (v==2) {
            rc=rc+1;printf("resposta certa! \n \n \n");
        } else {re=re+1;printf("resposta errada \n \n \n");}
        }

            printf("Respostas certas %d \n ", rc);
                printf("repostas erradas %d \n",re);

                (float)rc/10;

                printf("Voce acertou %d% % das repostas \n \n \n \n",rc*10);

                printf("Digite 0 para sair do programa, ou Digite qualquer outro valor para retornar ao menu \n \n ");
                scanf("%d",&m);

                if(m!=0) {

              int main();
            return main();
            }
                else {
                        return 0; }
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

int escolha,i, x, resp[10];


printf("Questionario sobre assuntos diversos: \n \n ");


printf("Selecione o assunto: \n 1\n 2\n 3\n 4\n 5\n 6\n 0-sair do programa \n");

scanf("%d",&escolha);

switch(escolha) {

case 0:
    return 0;
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
    return main(x);
}
return 0;


}


