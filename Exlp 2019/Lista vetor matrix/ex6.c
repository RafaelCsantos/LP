#include <stdio.h>
#include <stdlib.h>
#define max 2
#include <time.h>

int main () {

int i,j,cont=0,mat[max][max],x,loc=0;


printf("preencha a matriz");
    for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
            printf("pos [%d] [%d]",i,j);
            scanf("%d",&mat[i][j]);
    }
    }

printf("digite o numero que deseja buscar");
    scanf("%d",&x);

 for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
                if (x==mat[i][j]) {
                    printf("Achado em [%d] [%d] \n",i,j);
                }
        }

 }
         printf("nao achado");



return 0;

}
