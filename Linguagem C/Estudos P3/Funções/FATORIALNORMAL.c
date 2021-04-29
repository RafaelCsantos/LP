#include <stdio.h>
#include <stdlib.h>


int fato (int n) {
int fat=1,i;

if (n<0)
     return 1;
        else
        for (i=n; i>1; i--) {
            fat=fat*i;
        }

            return fat;
}





int main () {
int n,i;

scanf("%d",&n);


printf("termo fat %d \n",fato(n));

}

