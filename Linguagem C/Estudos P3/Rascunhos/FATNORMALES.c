#include <stdio.h>
#include <stdlib.h>

int fatr (int n) {
int f;

if (n<1)
    return 1;
else

f=(n*fatr(n-1));


return f;
}



int main () {
int n;
scanf("%d",&n);
printf("%d",fatr(n));
return 0;
}


/* nao recursiva
int fat (int n) {
int f=1,i;

for (i=n; i>1; i--) {
    f=f*i;

}

return f;
}
*/
