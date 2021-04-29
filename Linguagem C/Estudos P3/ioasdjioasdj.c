#include <stdio.h>
#include <stdlib.h>


int somar (int n1, int n2) {

int soma=0, i;


for (i=n1; i<=n2; i++) {

    soma=soma+i;
}



return soma;
}





int main () {

int n1=1,n2=3;


printf("soma %d",somar(n1,n2));

return 0;
}
