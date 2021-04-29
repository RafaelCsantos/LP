#include <stdio.h>
#include <stdlib.h>

void torre(int n, char de , char para , char aux) {
if (n==1)
printf("move disco %d da estaca %c p/ a estaca %c\n",1, de , para);

else {
torre(n-1, de , aux , para);
printf("move disco %d da estaca %cp/ a estaca %c\n", n, de , para);


torre(n-1, aux , para , de );
}
}

int main () {

int n=4;
torre(n,'a','b','c');
return 0;
}
