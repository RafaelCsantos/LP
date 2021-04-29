#include <stdio.h>

int main ()
{
    int n, n2, i, soma=0;

    printf("\n n: \n");
    scanf("%d", &n);

    printf("\n n2: \n");
    scanf("%d", &n2);

    for (i=n; i<=n2; i++)
    {
        soma = soma + i;
    }

}
