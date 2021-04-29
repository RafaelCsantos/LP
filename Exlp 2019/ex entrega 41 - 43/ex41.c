#include <stdio.h>
#include <stdlib.h>

int main () {

float n1,n2,n3,nex,med;

printf ("digite as notas 1, 2 e 3 \n");
        scanf("%f \n %f \n %f",&n1,&n2,&n3);

                printf("Digite a media dos exercicios");
                    scanf("%f",&nex);

med= ( ( ((n1+n2)*2) + (n3*3) + nex)/7 );


if (med>=9) {

    printf("voce recebeu o conceito A e nota %f",med);
}
    else

    if (med>=7.5 && med<9) {
                printf("voce recebeu o conceito B e nota %f",med);
    }
        if (med>=6 && med<7.5) {

                printf("voce recebeu o conceito c e nota %f",med);

        }
                    else
                    if (med<6) {
                        printf("voce recebeu o conceito D e nota %f",med);

                    }











return 0;
}
