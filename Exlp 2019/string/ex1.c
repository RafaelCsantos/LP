#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 30

int main () {

char i,a[max];
int cont=0;


printf ("digite a primeira frase");
fgets(a,sizeof(a),stdin);

    for (i=0; i<max; i++) {
            if (a[i]=='a') {
                a[i]='b';
        cont=cont+1;
        }


    }

        printf ("foram modificados %d caracteres \n",cont);

        printf ("string nova %s : \n \n",a);








return 0;
}
