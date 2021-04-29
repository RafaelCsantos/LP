#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {

    char cargo[20];
    float sal,salfinal,i;
    int n;


    printf ("Digite o cargo atual \n");
       fgets(cargo,sizeof(cargo),stdin);
        n=strlen(cargo);
        cargo[n-1]='\0';




        for(int i = 0; i < strlen(cargo); i++) {
    if(cargo[i] == '\n') {
        cargo[i] = '\0';
 }
                                                }


if ( (strcmp(cargo,"Gerente")==0) || (strcmp(cargo,"gerente")==0) ) {
    printf ("Seu cargo eh gerente \n");
        printf("Digite seu salario \n");
            scanf("%f",&sal);
             salfinal=sal+sal*0.10;
               printf("Seu reajuste foi de 10%%. Seu Salario inicial era %2.2f \n, seu novo salario eh %2.2f, A diferença do reajuste foi %2.2f",sal,sal*1.10,salfinal-sal);
}
    else
            if ( (strcmp(cargo,"Engenheiro")==0) || (strcmp(cargo,"engenheiro")==0) ) {
                    printf ("Seu cargo eh engenheiro \n");
                        printf("Digite seu salario \n");
                            scanf("%f",&sal)   ;
                             salfinal=sal+sal*0.20;
                               printf("Seu reajuste foi de 20%%. Seu Salario inicial era %2.2f \n, seu novo salario eh %2.2f, A diferença do reajuste foi %2.2f",sal,sal*1.20,salfinal-sal);
                }

                    else
                         if ( ( (strcmp(cargo,"Auxiliar")==0) || strcmp(cargo,"auxiliar")==0) ) {

                            printf ("Seu cargo eh auxiliar \n");
                                printf("Digite seu salario \n");
                                    scanf("%f",&sal);
                                     salfinal=sal+sal*0.30;
                                       printf("Seu reajuste foi de 30%%. Seu Salario inicial era %2.2f \n, seu novo salario eh %2.2f, A diferença do reajuste foi %2.2f",sal,sal*1.30,salfinal-sal);

                        }
    else {
            printf ("Seu cargo eh outro \n");
            printf("Digite seu salario \n");
            scanf("%f",&sal);
            salfinal=sal+sal*0.40;

                printf("Seu reajuste foi de 40%%. Seu Salario inicial era %2.2f \n, seu novo salario eh %2.2f, A diferença do reajuste foi %2.2f",sal,sal*1.40,salfinal-sal);

    }
    return 0;
}
