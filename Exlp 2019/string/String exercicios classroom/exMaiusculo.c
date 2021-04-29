#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 200
int main () {

char pal[max];
int n,i;

fgets(pal,sizeof(pal),stdin);
n=strlen(pal);
pal[n-1]='\0';

pal[0]=pal[0]-32;

for (i=0; i<strlen(pal); i++) {

    if (pal[i]==' ') {
            pal[i+1]=pal[i+1]-32;

    }
}

        printf("%s",pal);














return 0;
}
