#include <stdio.h>
#include <stdlib.h>
#define lin 2
#define col 2

int main () {
float mat1[lin][col], mat2[lin][col],soma=0;

int i,j;


//Preenchendo matriz A

printf("preencha matriz A \n");
for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {

            printf("lin %d col %d \n ",i,j);
                scanf("%f", &mat1[i][j]);
          soma=soma+mat1[i][j];
        }

}

//Preenchendo matriz B

printf("preencha matriz B \n");
for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {

            printf("lin %d col %d \n ",i,j);
                scanf("%f",&mat2[i][j]);
        soma=soma+mat2[i][j];
        }
}

//imprimindo mat A
        printf("Matriz A \n \n");
    for (i=0; i<lin; i++) {
            for (j=0; j<col; j++) {
                printf("%2.2f ", mat1[i][j]);

            }

            printf("\n");
    }
    printf("\n \n");
//imprimindo mat b
    printf("Matriz b: \n \n ");
    for (i=0; i<lin; i++) {
            for (j=0; j<col; j++) {
                printf("%2.2f ", mat2[i][j]);

            }

            printf("\n");
    }

//somando matriz



                    printf("Soma das matrizes eh %2.2f",soma);




return 0;
}
