#include <stdio.h>
#include <stdlib.h>



int fato (int n) {

int fat;

if (n<1)

    return 1;




else

fat=fat*fato(n-1);

return fat;


}





int main () {

int n=5;

printf("%d",fato(n));
}
