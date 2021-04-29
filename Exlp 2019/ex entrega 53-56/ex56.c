#include <stdio.h>
#include <stdlib.h>

int main () {

int i,n;

printf("Digite o numero que voce quer a tabuada");
scanf("%d",&n);

if  ( ( n>=1 ) && (n<=10) ) {

for (i=1; i<=10; i++) {
printf ("%d x %d: %d \n",n,i,i*n);


}
                            }

else    {

    printf("Digite um numero novamente \n \n ");
    return main();
}








return 0;
}
