#include <stdio.h>
#include <stdlib.h>


int main() {

    int num, inverter=0, aux, div;

    printf( "Digite um numero:\n" );
    scanf( "%d", &num );
    aux = num;

    do {

        div = num % 10;
        inverter = inverter * 10 + div;
        num=num/10;
    }
            while (num!=0);

    printf( "Numero digitado = %d\n", aux );
    printf( "Numero inverso = %d\n", inverter );

    return 0;
    }

