#include <stdio.h>
#include <stdlib.h>



int fibbo(int n) {


int fat=1;

if( (n==1) | (n==2) ) {
    return 1;

}

else

return (fibbo(n-1)) + (fibbo(n-2));



}


int main () {

int n;

scanf("%d",&n);

printf("termo da fibo %d",fibbo(n));


return 0;
}
