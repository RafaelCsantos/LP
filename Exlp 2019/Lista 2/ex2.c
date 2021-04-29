#include <stdio.h>
#include <stdlib.h>

 int main () {

    float p1,p2,p3,m;

printf("digite a nota da P1, P2 e P3");
scanf("%f \n %f \n %f",&p1,&p2,&p3);

    m=( (p1)+ (p2*2) + (p3*3))/6;

        if (m>=7) {
            printf("A media foi %f,aprovado",m);

            }
                else
                    if ( (m<7) && (m>=5)  ) {
                        printf("a media foi %f, recuperacao",m);
                        }
                            else
                                printf("A media foi %f, reprovado",m);













return 0;








 }
