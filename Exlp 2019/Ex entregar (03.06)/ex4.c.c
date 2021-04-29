#include <stdio.h>
#include <stdlib.h>

int inverter();
int main () {

int num,aux;

printf("digite um numero \n");
    scanf("%d",&num);
    aux=num;
    printf("Numero original %d \n invertido %d \n",aux,inverter(num));
return 0;
}

int inverter (int n1) {
    int div, inverter=0;


 do {

        div = n1 % 10;
        inverter = inverter * 10 + div;
        n1=n1/10;
    }
            while (n1!=0);


return inverter;



}





