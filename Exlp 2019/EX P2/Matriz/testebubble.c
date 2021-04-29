#include <stdio.h>
#include <stdlib.h>
#define max 20


int main () {

int vet[max],i,j,aux;

for (i=0; i<max; i++) {

    vet[i]=rand()%200;

}


    for (i=0; i<max; i++) {
        for (j=i+1; j<max; j++) {


                if ( (vet[i]) > (vet[j]) ) {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;


                }

        }

    }
            for (i=0; i<max; i++) {
                printf("Vetor ordenado %d \n",vet[i]);
                }







}
