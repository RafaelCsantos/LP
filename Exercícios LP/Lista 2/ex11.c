#include <stdio.h>

int main () {

int a,b,c;

printf("Digite os 3 lados do triangulo");
scanf("%d %d %d",&a,&b,&c);

if (a>90 || b>90 || c>90) {

printf("Eh um triangulo obstusangulo");
}
    else if ( (a==90 || b==90 || c==90) ) {
        printf("E um triangulo retangulo"); }

            else if ( (a<90 && b<90) && (c<90) ) {


                printf("e um triangulo Acutangulo"); }
                else {
                    printf("nao eh um triangulo"); }


return 0;

}



