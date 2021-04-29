#include <stdio.h>
#include <stdlib.h>


float calc (float n1, float n2) {

return (n1+n2);

}

float sub (float n1, float n2) {

return (n1-n2);
}

float mult (float n1, float n2) {

return (n1*n2);

}

float divi (float n1, float n2) {

return (n1/n2);

}

int main () {

float n1,n2;
int op;

printf ("digite o primeiro numero");
    scanf ("%f",&n1);

        printf ("digite o segundo numero");
            scanf ("%f",&n2);


printf ("escolha a operacao: 1-Adicao \n 2-Subtracao \n 3- Multiplicacao 4-Divisao \n");
    scanf("%d",&op);

switch (op) {
case 1 :
        printf("%f",calc(n1,n2));
            break;
case 2:
        printf("%f",sub(n1,n2));
            break;
case 3:
        printf("%f",mult(n1,n2));
            break;
case 4:
        printf("%f",divi(n1,n2));
            break;

default:
        break;
}

return 0;
}













