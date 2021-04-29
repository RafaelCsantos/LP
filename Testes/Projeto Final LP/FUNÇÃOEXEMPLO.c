#include <stdio.h>

int sub (float n1, float n2) {

float res;
res=n1-n2;

return(res);
}

int divisao(float v1, float v2) {

float res;
res=(v1/v2);
return (res);
}

int ad (float n1, float n2) {
float res;
res=(n1+n2);
return (res);
}

int multi (float n1, float n2) {
float res;
res=(n1*n2);
return (res);

}



int main () {

int op;
float v1,v2,res;

printf("digite os numeros");
scanf("%f %f",&v1,&v2);

printf("digite a op");
scanf("%d",&op);

switch (op) {


case 1:
res=divisao(v1,v2);
printf("%f",res);
break;
case 2:
res=sub(v1,v2);
printf("%f",res);
break;
case 3:
res=ad(v1,v2);
printf("%f",v1,v2);
break;
case 4:
res=multi(v1,v2);
printf("%f",v1,v2);
break;
default:
break;

}

return 0;
}
