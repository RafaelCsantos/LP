#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30];

    gets(palavra);
    if(palindromo(palavra))
        printf("Eh palindromo.");
    else
        printf("Nao eh palindromo.");

    return 0;
}


int palindromo(char palavra[]){
    int i;

    for(i=0;i<strlen(palavra)/2;i++)
        if(palavra[i]!=palavra[strlen(palavra)-1-i])
            return 0;

    return 1;
}
