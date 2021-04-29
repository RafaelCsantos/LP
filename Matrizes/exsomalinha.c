#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 5



int main () {

int i,j,mat[lin][col],total=0,somalinha[lin],soma=0;


//pegar valores

for  (i=0; i<lin; i++) {
    for (j=0; j<col; j++) {

        printf("digite a Lin %d Col %d ",i,j);

            scanf("%d",&mat[i][j]);
    }

}

//imprimir matriz

    for (i=0; i<lin; i++) {
            for (j=0; j<col; j++) {

                printf("%d ",mat[i][j]);

            }

                printf("\n");
    }

//Somar linhas
printf("soma das linhas");

for  (i=0; i<lin; i++) {
    for (j=0; j<col; j++) {

        soma=soma+mat[i][j];

    }

    somalinha[i]=soma;
    soma=0;
        printf("Soma da Linha %d eh %d \n",i, somalinha[i]);
}
//somar total
    for (i=0; i<lin; i++) {
        total=total+somalinha[i];
    }

        printf("O total das linhas foi %d \n",total);



return 0;
}
