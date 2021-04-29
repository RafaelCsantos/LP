#include <stdio.h>
#include <stdlib.h>


int main () {

float an,cd,pc,totalcig,totalcart,total;

printf("digite quantos anos voce fuma");
scanf ("%f",&an);

    printf ("digite quantos cigarros voce fuma por dia");
        scanf ("%f",&cd);

            printf ("digite o preço de uma carteira");
                scanf ("%f",&pc);



                totalcig=(an*365) * cd;

                    totalcart = totalcig/30;

                        total=totalcart*pc;

                            printf ("preço total %f",total);



















return 0;
}
