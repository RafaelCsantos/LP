#include <stdio.h>
#include <string.h>

int tema1 (int escolha) {

int i=0,v[10];


printf("o tema escolhido foi Teste 1 \n \n \n");
    do {
        printf("Pergunta 1: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 2: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 3: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 4: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 5: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 6: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 7: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 8: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 9: \n");
        scanf("%d",&v[i]);
        printf("Pergunta 10:\n");
        scanf("%d",&v[i]);
    }
    while(i=2);

  printf("as reposta da pergunta foi %d \n",i,v[i]);






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

int escolha,i=0, resp[10];


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


