#include <stdio.h>
#include <stdlib.h>

int main () {

float salfix, vv;


printf("digite o salario fixo do vendedor");
scanf("%f",&salfix);

printf("Digite o valor total de vendas");
scanf("%f",&vv);

if (vv<=1500) {

    printf("O valor final com comissao eh %2.2f",(salfix+(vv*0.03)));

}
    else
        printf("o valor final com comissao eh %2.2f",(salfix+(vv*0.05)) );









return 0;
}
