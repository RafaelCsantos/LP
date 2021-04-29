#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char text1[30],text2[30],text3[60];

int n1,n2,cont1=0,cont2=0;

printf("Digite a primeira frase");
    fgets(text1,sizeof(text1),stdin);
    n1=strlen(text1)-1;

printf("Digite a segunda frase");
    fgets(text2,sizeof(text2),stdin);
    n2=strlen(text2)-1;


    printf("tam 1 %d \n tam 2 %d",n1,n2);

















return 0;
}
