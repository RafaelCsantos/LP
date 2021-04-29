#include <stdio.h>
#include <stdlib.h>

int main () {

int n,cont=0,tam,i;

srand(time(NULL));

printf("digite o tamanho do vetor");
scanf("%d",&tam);

if (tam>0 && tam<=100) {

int v[tam];


for (i=0; i<tam; i++) {
    v[i]=rand()%101;
}




printf("digite o numero que deseja procurar");
        scanf("%d",&n);

for (i=0; i<tam; i++) {

    if (n==v[i]) {
        cont=cont+1;


    }
        printf("%d \t",v[i]);

}

    printf("\n o numero apareceu %d  vezes \n ",cont);

}


    else    {
printf("valor invalido para o vetor \n \n");
return main();
    }





return 0;
}
