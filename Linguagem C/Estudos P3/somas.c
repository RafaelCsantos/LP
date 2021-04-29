#include <stdio.h>
#include <stdlib.h>


int somar(int n1, int n2) {
if (n2==n1+1)
    return n1+n2;
else

return n1+(somar(n1+1,n2));
}



int main () {

int n1=1,n2=3;


printf("soma %d",somar(n1,n2));

return 0;
}
