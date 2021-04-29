#include <stdio.h>

int main () {

int a,b,c;

printf("Digite os 3 lados do triangulo");
scanf("%d %d %d",&a,&b,&c);


if ( (a==b) && (b==c)) {

printf ("os lados %d %d %d sao iguais, triangulo equilatero",a,b,c);
}
else if (a==b || b==c || a==c) {

printf("os lados sao iguais, triangulo eh isóceles");
}

else   {
    printf("O triangulo possui 3 lados diferentes");



}



return 0;
}




