#include <stdio.h>
#include <stdlib.h>

struct data {
int a,b,c;
};

struct data multi (struct data a) {

a.a=2000;
a.b=1000;
a.c=500;

return a;

}struct data valores;



int main () {


valores.a=2;
valores.b=4;
valores.c=5;


printf("Resultado %d %d %d",multi(valores));

return 0;

}
