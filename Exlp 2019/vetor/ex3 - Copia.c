#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

int i,jogadas;
float total=0,faces[6];

srand(time(NULL));

faces[0]=0;
faces[1]=0;
faces[2]=0;
faces[3]=0;
faces[4]=0;
faces[5]=0;

for (i=0; i<1000; i++) {
    jogadas=rand()%7;


 if (jogadas==1) {
        faces[0]=faces[0]+1;
    }
        else
        if (jogadas==2) {
            faces[1]=faces[1]+1;
        }
            else
            if (jogadas==3) {
                faces[2]=faces[2]+1;
            }
                else
                if (jogadas==4) {
                    faces[3]=faces[3]+1;
                }
                    else
                    if (jogadas==5) {
                        faces[4]=faces[4]+1;
                    }
                        else
                            faces[5]=faces[5]+1;
total=total+1;

}




printf("Face 1: %f vezes \n Face 2: %f \n Face 3: %f vezes \n Face 4: %f vezes \n Face 5: %f vezes \n face 6: %f vezes \n",faces[0],faces[1],faces[2],faces[3],faces[4],faces[5]);

printf("Porcentagem face 1 %2.2f %% \n Porcentagem face 2 %2.2f %% \n Porcentagem face 3 %2.2f %% \n, Porcentagem face 4 %2.2f %% \n, Porcentagem face 5 %2.2f %% \n, Porcentagem face 6 %2.2f %% \n",
       ((faces[0]/total)*100), ((faces[1]/total)*100), ((faces[2]/total)*100), ((faces[3]/total)*100), ((faces[4]/total)*100), ((faces[5]/total)*100) );

return 0;
}
