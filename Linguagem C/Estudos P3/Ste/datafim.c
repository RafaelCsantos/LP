#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data {

int dia, mes, ano;
}datainicio;



        struct data fim_evento (struct data datainicio, int duracao) {

        struct data datafim;

        datafim.dia=datainicio.dia+duracao;
         if (datafim.dia>31) {
                datafim.dia%30;
                    datafim.mes=datainicio.mes+datafim.dia%30;

         }
            else
                datafim.mes=datainicio.mes;




        return datafim;
        };




int main () {

int dura;

printf("Digite o dia de inicio");
        scanf("%d",&datainicio.dia);
printf ("digite o mes de inicio");
        scanf("%d",&datainicio.mes);
printf ("digite o ano de inicio");
        scanf("%d",&datainicio.ano);
printf ("digite a duracao");
        scanf("%d",&dura);

            printf("A data final eh %d // %d // %d",fim_evento(datainicio,dura));

return 0;
}


