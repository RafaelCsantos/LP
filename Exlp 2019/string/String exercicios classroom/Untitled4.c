#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char cargo[30];
int n;
float sal;

printf("digite seu cargo");
    fgets(cargo,sizeof(cargo),stdin);


printf("digite seu salario");
scanf("%f",&sal);


        n=strlen(cargo);
            cargo[n-1]='\0';

if ( (strcmp(cargo,"gerente") ) ==0 || (strcmp(cargo,"Gerente") ==0 ) ) {

printf("Seu cargo eh gerente \n, seu salario antigo era %f \n voce teve 10%% de aumento \n salario novo %f \n",sal,sal*1.10);

}
else

if ( (strcmp(cargo,"auxiliar") ) ==0 || (strcmp(cargo,"Auxiliar") ==0 ) ) {

printf("Seu cargo eh auxiliar \n, seu salario antigo era %f \n voce teve 30%% de aumento \n salario novo %f \n",sal,sal*1.30);

}
else

if ( (strcmp(cargo,"engenheiro") ) ==0 || (strcmp(cargo,"Engenheiro") ==0 ) ) {

printf("Seu cargo eh engenheiro \n, seu salario antigo era %f \n voce teve 20%% de aumento \n salario novo %f \n",sal,sal*1.20);

}

    else {

        printf("seu cargo eh outro \n, seu salario antigo era %f \b voce teve 40%% de aumento \n salario novo %f",sal,sal*1.40);

    }














return 0;
}
