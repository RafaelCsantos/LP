#include <stdio.h>
#include <stdlib.h>

int main () {

int h1,h2,m1,m2,hv,mn,mv,hn,soma,prod;

printf("Digite a idade dos dois homens \n ");
        scanf("%d \n %d",&h1,&h2);


        printf("Digite a idade das duas mulheres \n");
            scanf("%d \n %d",&m1,&m2);


if (h1>h2) {

hv=h1;
hn=h2;
}
    else
    if (h2>h1) {
        hv=h2;
        hn=h1;
    }


            if (m1>m2) {
                mn=m2;
                mv=m1;
                }
                    else
                    if(m2>m1) {
                        mn=m1;
                        mv=m2;
                    }
                        printf("Homem velho: %d homem novo: %d \n mulher velha: %d mulher nova: %d",hv,hn,mv,mn);

                            printf("soma homem velho e mulher nova: %d \n, produto Homem novo e mulher velha %d",(hv+mn), (hn*mv) ) ;




return 0;
}
