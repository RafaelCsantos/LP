#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nomes[5][50];
int i,n;


for (i=0; i<5; i++) {
        printf ("Nome %d ",i);
            fgets(nomes[i],sizeof(nomes[i]),stdin);
            n=strlen(nomes[i]);
            nomes[i][n-1]='\0';
}
    printf("\n");

        for (i=0; i<5; i++) {
            printf("\n %s",nomes[i]);
        }











return 0;
}
