#include <stdio.h>

int main ()
{
    int n, i, soma=0;

    for (i=0;i<=10;i++)
    {
        printf("\n entrada: \n");
        scanf("%d", &n);

        if (n<40)
        {
            soma = n + soma;
        }
    }

}
