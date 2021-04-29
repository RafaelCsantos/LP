#include <stdio.h>

int main () {

int ia,id,im,idf;


printf("Digite a idade em anos");
scanf("%d",&ia);
//1 = 365 dias
printf("Digite a idade em meses");
scanf("%d",&im);
//4 meses= 120 dias

printf("Digite a idade em dias");
scanf("%d",&id);

// 5 dias

idf=(id+(ia*365)+(im*30));

printf("A idade total em dias eh %d",idf);






return 0;
}
