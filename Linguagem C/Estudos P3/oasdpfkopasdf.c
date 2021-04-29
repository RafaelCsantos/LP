#include <stdio.h>
#include <stdlib.h>



int fato(int n) {

int f=0;

if (n<1)
return 1;

else

f=(n*fato(n-1) );





return f;
}











int main () {

int n=5;

printf("%d",fato(n));

}
