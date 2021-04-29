#include <stdio.h>
#include <stdlib.h>




int main () {

int a,b,div;

scanf("%d %d",&a,&b);

a=(float)a;
b=(float)b;


div=(float)(a/b);

printf ("Soma sem cast %d \n soma com cast %d",a/b,div);










return 0;
}
