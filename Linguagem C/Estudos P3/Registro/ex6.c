#include <stdio.h>
#include <stdlib.h>

struct hm {
int horas, minutos;
};

struct hm converter (int m) {
    struct hm conv;
    conv.horas=m/60;
    conv.minutos=m%60;
    return conv;
};


int main () {

int n;

printf("digite o numero em minutos");
    scanf ("%d",&n);

    printf(" %d horas e %d minutos",converter(n));
return 0;
}


