#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main () {


int e,i=0;

char resp[8];

srand(time(NULL));

for (i>0; i<4; i++) {
fflush(stdin); //Tira lixo de memoria

e=rand()%6;





switch(e) {

case 1:

printf("Digite a resposta pra pergunta 1: \n ");
fgets(resp,8,stdin);
puts(resp);
break;

case 2:

printf("Digite a resposta pra pergunta: 2 \n ");
fgets(resp,8,stdin);
puts(resp);
break;

case 3:

printf("Digite a resposta pra pergunta 3: \n ");
fgets(resp,8,stdin);
puts(resp);
break;

case 4:

printf("Digite a resposta pra pergunta 4: \n ");
fgets(resp,8,stdin);
puts(resp);
break;

case 5:

printf("Digite a resposta pra pergunta 5: \n ");
fgets(resp,8,stdin);
puts(resp);
break;


default:
    printf("random bugou");
}
}

return 0;
}

