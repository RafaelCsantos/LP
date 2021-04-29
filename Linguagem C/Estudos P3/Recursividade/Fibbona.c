#include <stdio.h>
#include <stdlib.h>

int fibrec (int n) {

if  ( (n==1) || (n==2) )
        return 1;
else

return (fibrec(n-1)+fibrec(n-2));
}

int main () {
int n;
scanf("%d",&n);
printf("%d",fibrec(n));
return 0;
}



/* nao recursiva
int fibo (int n) {

int f1=1,f2=1,f=0,i;

for (i=3; i<=n; i++) {
    f=f1+f2;
    f1=f2;
    f2=f;
}
    return f;
}

*/
