#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 5

int main() {
srand(time(NULL));
int i,j,x,cont=0;
int matriz[max][max];


    for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
            matriz[i][j]=rand()%11;
        }
    }

        for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
                printf("%d ",matriz[i][j]);
        }
            printf("\n");
        }

            for (i=0; i<max-1; i++) {
                for (j=i+1; j<max; j++) {
                        matriz[i][j]=0;
            }
            }

                for (i=0; i<max; i++) {
                        for (j=0; j<max; j++) {
                                printf("%d \t",matriz[i][j]);
                        }
                        printf("\n");
                }








return 0;
}

