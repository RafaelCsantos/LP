#include <stdio.h>
#include <stdlib.h>

struct data {

int dias, mes, ano;

}dias1, dias2;

int calcdias (int, int);

int main () {

int totald1,totald2;


dias1.dias=10;
dias1.mes=9;
dias1.ano=2000;

totald1= (  (dias1.dias)+ (30*dias1.mes) + (365*dias1.ano) );


dias2.dias=20;
dias2.mes=9;
dias2.ano=2010;

totald2= (  (dias2.dias)+ (30*dias2.mes) + (365*dias2.ano) );



printf("numero de dias entre essas datas %d",calcdias(totald1,totald2) );


return 0;
}

int calcdias(int d1, int d2) {


return(d2-d1);


}








