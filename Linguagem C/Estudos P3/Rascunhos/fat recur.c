#include <stdio.h>
#include <stdlib.h>


int fato (int n) {

int fat=1;

if (n<1) {
return 1; }

else

fat=n*fato(n-1);

return fat;

}


int main () {
    int n;
    printf("numero pra calcular fatorial");
        scanf("%d",&n);
            printf("fatorial %d",fato(n));
return 0;
}
