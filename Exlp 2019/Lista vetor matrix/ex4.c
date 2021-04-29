#include <stdio.h>
#include <stdlib.h>

#define max 5

int main () {

int i,j;
int mat[max][max];


for (i=0; i<max; i++) {
        for (j=0; j<max; j++) {
            if (i==j) {
                    mat[i][j]=1;
            }
                else
                    mat[i][j]=0;
        }
}

    for (i=0; i<max; i++) {
       for (j=0; j<max; j++) {
            printf("%d",mat[i][j]);


    }
            printf("\n");

    }


return 0;
}
