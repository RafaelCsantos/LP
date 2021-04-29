#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char timea[20],timeb[20];
int golsa,golsb;

printf("digite o nome do primeiro time");
scanf("%s",&timea);

    printf ("digite a quantidade de gols marcados");
        scanf("%d",&golsa);

printf ("digite o nome do segundo time");
scanf("%s",&timeb);

    printf("digite a quantidade de gols marcados");
        scanf("%d",&golsb);



if (golsa>golsb) {
    printf ("O time %s venceu pelo placar de %d a %d",timea,golsa,golsb);
    }
        else
            if(golsa<golsb) {
                printf ("o time %s venceu pelo placar de %d a %d",timeb,golsb,golsa);
                          }

                            else
                                printf ("os times %s e %s empataram pelo placar de %d a %d",timea,timeb,golsa,golsb);

return 0;
}
