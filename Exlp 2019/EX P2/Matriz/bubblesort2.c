#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main () {

int vetor[tam],i,j,aux;

for (i=0; i<tam; i++) {

printf("preencha o vetor %d",i);
    scanf ("%d",&vetor[i]);
}

for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            if ( (vetor[i]) > (vetor[i+1]) ) {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }

}
            for (i=0; i<tam; i++) {

        printf ("%d \t",vetor[i]);
            }


return 0;
}
