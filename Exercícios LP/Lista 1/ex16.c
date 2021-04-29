#include <stdio.h>

int main () {
float a;


printf("Digite quantas macas foram compradas");

scanf("%f",&a);

if (a<6) {
    printf("O valor das macas foi de %f",a*1.30);
}
    else
        printf("o valor das macas foi %f",a);

return 0;
}


