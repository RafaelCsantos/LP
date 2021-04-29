#include <stdio.h>
#include <stdlib.h>

int fatorial (int n) {

int fat=1,i;

for (i=n; i>1; i--) {
    fat=fat*i;

}

return fat;
}






int main () {

int n;
scanf("%d",&n);

printf ("%d",fatorial(n));

return 0;
}
