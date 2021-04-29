#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 5

int main () {

char a[max][50],n=0;
int i;


for (i=0; i<max; i++) {


fgets(a[i],sizeof(a),stdin);
n=strlen(a[i]);

a[i][n-1]='\0';

                }

                for (i=0; i<max; i++) {
                    printf("\n %s ",a[i]);

                }


return 0;
}
