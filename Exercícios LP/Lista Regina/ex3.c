#include <stdio.h>

int main () {
float c,p,pc,pp,pt;

printf("Digite a quantidade de copos comprados \n");
    scanf("%f",&c);

if (c<1000) {
pc=(c*0.18);
}

    else if ( (c>=1000) && (c<=2000) ) {

     pc=(c*0.15);
    }
        else { (pc=c*0.13);

        }

printf("Digite a quantidade de pratos comprados \n");
scanf("%f",&p);

if (p>1000) {
    pp=(p*0.40); }

        else if ( (p>=1000 ) && (p<=2000) ) {
    pp=(p*0.36); }

            else   { pp=(p*0.40); };




pt=pc+pp;

if (pt>500) {
        pt=pt-(pt*0.10); }
        else;


printf("O total de Copos comprados foi %f \n o total de pratos comprados foi %f \n , a compra total foi de: %f",pc,pp,pt);


return 0;
}
