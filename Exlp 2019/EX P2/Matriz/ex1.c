#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 5

int main () {


int i,j,mat[lin][col],somalinha[lin],total=0,soma=0;

for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
               // printf("digite pos [%d][%d]",i,j);
                //scanf("%d",&mat[i][j]);
            mat[i][j]=rand()%11;

        soma= (soma+mat[i][j]) ;

        }
            somalinha[i]=soma;
            total=total+soma;
            soma=0;

}

        for (i=0; i<lin; i++) {
        printf ("soma da linha [%d]",somalinha[i]);
        }

            printf("soma do total %d \n",total);














return 0;
}
