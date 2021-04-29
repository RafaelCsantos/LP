#include <stdio.h>
#include <stdlib.h>

struct hm{
    int horas;
    int minutos;
};

struct hm horaMinuto(int);

int main()
{

    int min;
    struct hm hmFinal;
    printf("Minutos: ");
    scanf("%d",&min);


    hmFinal = horaMinuto(min);
    printf("\nHoras: %d",hmFinal.horas);
    printf("\nMinutos: %d",hmFinal.minutos);

    return 0;
}

struct hm horaMinuto(int m){
    struct hm hmFina;
    hmFina.horas = m/60;
    hmFina.minutos = m%60;
    return hmFina;
};
