#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int teste () {

srand(time(NULL));

int i, j,vetor[10],r,c;
for (i=0; i<10; i++) {
        do {
            vetor[i]=rand() %11;
            r=0;
                for (j=0; j<i; j++) {
                    if(vetor[i] ==  vetor[j] ) {
                        r=1;
                        break;
                    }
                }
                }while(r);
                }
    for(i=0; i<10; i++){

        c=vetor[i];
        return teste2();
    }
 }

int teste2 (int c) {
switch(c) {
      case 1:
        printf("linha 1 \n");
        break;
    case 2:
        printf("linha 2 \n");
        break;
    case 3:
        printf("linha 3 \n");
        break;
    case 4:
        printf("linha 4 \n");
        break;
    case 5:
        printf("linha 5 \n");
        break;
    default:
        break;
        }





printf("%d",c);
}























int main() {
int t;
teste();



return 0;
}
