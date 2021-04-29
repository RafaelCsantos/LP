#include <stdio.h>

int main()  {

float te,tb,tn,tv;

printf("Digite o total de eleitores");
scanf("%f",& te);

printf("Digite a quantidade de votos brancos \n" );
scanf("%f", &tb);

printf("Digite a quantidade de votos nulos \n ");
scanf("%f", &tn);


printf("Digite a quantidade de votos validos \n");
scanf("%f", &tv);



tb=(tb/te)*100;
tn=(tn/te)*100;
tv= (tv/te)*100;




printf("O total de eleitores foi %f, os votos brancos foram %2.2f%%, os votos nulos foram %2.2f%%, os votos validos foram %2.2f%%",te,tb,tn,tv);






return 0;
}
