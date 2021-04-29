#include <stdio.h>
#include <stdlib.h>

int main () {

int n;
scanf("%d",&n);

int fat=0,i;


for (i=n; i>1; i--) {
    fat=fat*i;
}




printf ("%d",fat);

return 0;
}
