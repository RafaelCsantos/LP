#include <stdio.h>


int main () {

int a,b;

printf("Digite o valor inteiro pra calcular");
scanf("%d",&a);
printf("digite a operacao \n 1-Multiplicar valor por 2 \n dividir valor por 2 \n");
scanf("%d",&b);


switch (b) {

case 1:
printf("%d",a*2);
break;

case 2:
printf("%d",a/2);
break;

default:
    printf("valor incorreto");
    break;

}











return 0;

}
