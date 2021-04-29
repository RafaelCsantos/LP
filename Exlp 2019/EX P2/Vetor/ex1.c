#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 5
int main () {

srand(time(NULL));


int chave,num[max],i,pos[max];

for (i=0; i<max; i++) {
    pos[i]='\0';
}



printf("Digite a chave");
    scanf("%d",&chave);



for (i=0; i<max; i++) {

    num[i]=rand()%10;

     if (chave==num[i]) {

    pos[i]=i;

     }

}

for (i=0; i<max; i++) {

if (pos!='\0') {
    printf("foi encontrado na pos %d",pos[i]);
}
    else
        printf("nao foi encontrado");

}

return 0;
}
