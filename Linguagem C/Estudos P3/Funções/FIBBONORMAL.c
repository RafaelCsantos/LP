#include <stdio.h>
#include <stdlib.h>

int fib (int n) {

int i,f1=1,f2=1,f;

for (i=3; i<=n; i++) {

    f=f1+f2;
    f1=f2;
    f2=f;
}



return f;
}



int main () {

int n;

scanf("%d",&n);

printf("%d",fib(n));
}

