#include <stdio.h>
#include <stdlib.h>
#define tam 20


int main () {

int vetor[tam],i,j,aux;

for (i=0; i<tam; i++) {
    vetor[i]=rand()%20;
}

    for (i=0; i<tam; i++) {
        for (j=i+1; j<tam; j++) {

            if ( (vetor[i]) > (vetor[j]) ) {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;


            }

    }
    }

            for (i=0; i<tam; i++) {
                printf("%d ",vetor[i]);

            }



return 0;
}
