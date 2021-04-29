#include <stdio.h>

void funcao(float metro) {

printf("%f \n",metro*100);
printf("%f \n",metro*1000);
printf ("%f \n",metro/10);


}



int main () {

float metro;
scanf("%f",&metro);




funcao(metro);

return 0;


}
