#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {


srand(time(NULL));
int a[128], k, i, enc=0;

for (i=0; i<128; i++) {
 a[i] = rand()%200;

}


printf("Digite a chave K");
    scanf("%d",&k);

    for (i=0; i<128; i++) {

        if (a[i]==k) {

            enc=i;
        }
    }
            if (enc !=0) {

                printf("encontrado em pos %d",enc);
            }

                else
                        printf("nao encontrado");


return 0;
    }
