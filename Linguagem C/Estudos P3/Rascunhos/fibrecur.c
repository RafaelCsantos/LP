#include <stdio.h>
#include <stdlib.h>

int fibbo (int n) {

if  ( (n==1) || (n==2) ) {
        return (n-1);
}

    else
return (fibbo(n-1)+fibbo(n-2));
}


int main () {

int n;

scanf("%d",&n);

    printf("o termo da fibbo eh %d",fibbo(n));

return 0;
}
