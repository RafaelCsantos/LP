#include <stdio.h>
#include <stdlib.h>

int main () {

int anonasc,cod,anoing,anoat,id,tempoemp;


printf ("digite o codigo do empregado");
scanf ("%d",&cod);

    printf ("Digite o ano do nascimento");
    scanf ("%d",&anonasc);

        printf ("Ano de ingresso na empresa");
        scanf ("%d",&anoing);

            printf ("digite o ano atual");
                scanf ("%d",&anoat);

id=(anoat-anonasc);
tempoemp=(anoat-anoing);



        if ( (id>=65) || (tempoemp>=30)  ) {

            printf("requerer aposentadoria");
        }
            else

            if   (id>=60 && id<65) {
                  if (tempoemp>=25) {
                printf("requerer aposentadoria");
            } else
                            printf("nao requerer");




return 0;
}
}
