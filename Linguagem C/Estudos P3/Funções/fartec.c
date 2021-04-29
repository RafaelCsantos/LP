#include <stdio.h>
#include <stdlib.h>


int fat (int n) {

int t=1;

if (n<1) {
    return (1); }

else

t=n*fat(n-1);

return t;


}










int main () {

    int n;

        printf("numero fat");
            scanf("%d",&n);

    printf ("fatorial: %d", fat(n));


}
