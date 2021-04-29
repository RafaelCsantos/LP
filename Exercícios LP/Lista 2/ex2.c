#include <stdio.h>

int main () {

int a,at;

printf("Digite seu ano de nascimento");
scanf("%d",&a);
printf("Digite o ano atual");
scanf("%d",&at);

if ( (at-a) <16 ) {

printf("Voce nao pode votar esse ano");
}

else {
    printf("Voce pode votar esse ano"); }

    return 0;








}
