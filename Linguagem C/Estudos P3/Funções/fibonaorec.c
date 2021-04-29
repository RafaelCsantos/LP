#include <stdio.h>
#include <stdlib.h>

int fibbo (int n) {
int i,f1=1,f2=1,f;


if ( (n==1) || (n==2) )
    return 1;

else

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

printf("%d",fibbo(n));

return 0;
}
