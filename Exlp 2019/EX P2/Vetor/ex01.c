#include <stdio.h>
#include <stdlib.h>

int main () {

int i,r[10],s[10],y[10],x[20],soma=0;


for (i=0; i<10; i++) {
    printf ("digite o valor da pos R [%d]",i);
        scanf ("%d",&r[i]);
        soma=soma+r[i];
}
    printf("\n");

    for (i=0; i<10; i++) {
    printf ("digite o valor da pos S [%d]",i);
        scanf ("%d",&s[i]);
        soma=soma+s[i];
}

for (i=0; i<10; i++) {
        x[i]=r[i];
}

    for (i=10; i<20; i++) {
        x[i]=s[i-10];
    }



for (i=0; i<20; i++) {
        printf("Vetor X pos [%d] %d \n",i,x[i]);
}
printf("A soma total eh %d",soma);










return 0;
}
