#include <stdio.h>
#include <stdlib.h>

int fat (int n) {
int fat=1,i;

    for (i=n; i>0; i--) {
        fat=fat*i;
    }

return fat;


}



int main () {

int n;
printf("digite o valor pra calcular fatorial");
    scanf("%d",&n);

printf("A fatorial eh %d",fat(n));



return 0;
}
