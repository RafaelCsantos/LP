#include <stdio.h>
#include <stdlib.h>
#define max 5
#include <time.h>
int main () {

int mat[max][max],i,j,cont=0;
srand(time(NULL));


/*ler elementos
for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {

printf("Digite a pos [%d] [%d] da matriz",i,j);
        scanf("%d",&mat[i][j]);
        }
        }
*/

// numeros aleatorios
for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
                mat[i][j]=rand()%21;
        }
}


    // checar elementos

    for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
                if (mat[i][j]>10) {
                    cont=cont+1;
                }
        }
    }

    // imprimindo valores
for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
            printf("%d ", mat[i][j]);
        }
            printf("\n");
}




printf("o total da numero maior que 10 sao %d ",cont);


return 0;
}
