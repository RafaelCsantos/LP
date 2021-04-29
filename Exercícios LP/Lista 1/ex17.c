#include <stdio.h>

int main() {

float med,n1,n2;

printf("Digite a primeira e segundan nota do aluno");
scanf("%f %f", &n1,&n2);


med=(n1+n2)/2;

if (med>=6) {

printf("o aluno foi aprovado com a media %2.2f",med);
}

    else
        printf("o aluno nao foi aprovado. media %2.2f",med);











return 0;
}
