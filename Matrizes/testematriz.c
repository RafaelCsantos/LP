#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int main () {

int m[MAX][MAX],i,j;


for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
            printf("Digite o valor da linha %d e coluna %d ",i,j);
                scanf("%d",&m[i][j]);


        }

}

for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
                printf("%d ",m[i][j]);
        }
    printf("\n");
}






return 0;
}
