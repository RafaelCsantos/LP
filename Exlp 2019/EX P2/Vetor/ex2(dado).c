#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main () {

int i,vezes,face=0,vet[6],porcentagem;

srand(time(NULL));

for (i=0; i<6; i++) {
        vet[i]=0;
}


printf ("digite quantas vezes o dado vai ser jogado");
    scanf ("%d",&vezes);


for (i=0; i<vezes; i++) {
face=rand()%7;

    switch (face) {
    case 1:
        vet[0]=vet[0]+1;
            break;
                case 2:
                vet[1]=vet[1]+1;
                break;
                    case 3:
                    vet[2]=vet[2]+1;
                    break;
                        case 4:
                        vet[3]=vet[3]+1;
                            break;
                                case 5:
                                vet[4]=vet[4]+1;
                                break;
                                        case 6:
                                        vet[5]=vet[5]+1;
                                        break;
                                            default:
                                                break;

    }




}




for (i=0; i<6; i++) {
                    printf("Caiu na pos [i] %d vezes\n porcentagem [i] %%",vet[i],porcentagem=(float)vet[i]/vezes);


            }








return 0;
}
