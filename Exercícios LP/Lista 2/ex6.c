#include <stdio.h>

int main () {

float r,a,s;



printf("Digite a altura");
scanf("%f",&a);

printf("Digite o sexo: 1-Feminino \n  2-Masculino");
scanf("%f",&s);


if (s==1) {

r=(62.1*a)-44.7;
printf("O peso ideal eh %f",r);
}
else if (s==2){
r=(72.7*a)-58;
printf("O peso ideal eh %f",r);
}
else {
    printf("O valor %f digitado esta incorreto",s);

}
return 0;
}















