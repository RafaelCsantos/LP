#include <stdio.h>
#include <stdlib.h>

int main () {

int usupad=1234,usu,senhapad=9999,senha;

printf("digite o codigo do usuario \n");
scanf ("%d",&usu);

    if (usu==usupad) {

            printf("usuario correto \n");

                printf("digite a senha para o usuario \n");
                    scanf("%d",&senha);
                        if (senha==senhapad) {
                            printf("senha correta");
                        }
                                else {
                                    printf("senha incorreta");
                                }
        }


            else
                printf("usuario incorreto");










return 0;
}

