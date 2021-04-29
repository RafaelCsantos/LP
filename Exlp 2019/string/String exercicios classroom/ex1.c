#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char string[20];
int i,n=0,cont=0;

printf("digite a palavra \n \n");
fgets(string,sizeof(string),stdin);
n=strlen(string);
string[n-1]='\0';
printf("o texto digitado foi %s \n",string);

for (i=0; i<n; i++) {

    if (string[i]=='a') {
            cont++;
            string[i]='b';

    }
}


printf("nova String %s \n foram trocadas %d letras \n",string,cont);













return 0;

}
