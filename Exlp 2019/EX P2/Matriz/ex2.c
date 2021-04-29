#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5
#include <time.h>



int main () {
srand(time(NULL));


int i,j,mat1[lin][col],mat2[lin][col],soma[lin][col];

for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
            //printf ("Mat 1 [%d][%d]",i,j);
mat1[i][j]=rand()%10;            //scanf("%d",&mat1[i][j]);
}


}
for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
            //printf ("Mat 2 [%d][%d]",i,j);
            mat2[i][j]=rand()%10;
                //scanf("%d",&mat2[i][j]);
}



}

    for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
            printf("%d ",mat1[i][j]);
        }
            printf ("\n");
    }
        printf("\n");

            for (i=0; i<lin; i++) {
        for (j=0; j<col; j++) {
            printf("%d ",mat2[i][j]);
        }
            printf ("\n");
            }
                printf("\n");

//soma
        for (i=0; i<lin; i++){
                for (j=0; j<col; j++){
                    soma[i][j]=(mat1[i][j]+mat2[i][j]);
                }
        }

              for (i=0; i<lin; i++) {
                        for (j=0; j<col; j++) {
                            printf("%d ",soma[i][j]);
                }
                    printf("\n");
}
return 0;
}
