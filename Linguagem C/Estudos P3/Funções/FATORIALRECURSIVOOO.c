#include <stdio.h>
#include <stdlib.h>

int fatrec (int n) {

int fat=1;

    if (n<1)
        return 1;
    else

fat=n*fatrec(n-1);

return fat;


}











int main () {

int n;

scanf("%d",&n);

printf("%d",fatrec(n));
return 0;
}
