#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nomes[5][20];
int i;

for (i=0; i<5; i++) {

    printf("Digite o nome [%d]",i);
        fgets(nomes[i],sizeof(nomes),stdin);
}

        for (i=0; i<5; i++) {
                printf("%s \n",nomes[i]);
        }




















return 0;
}
