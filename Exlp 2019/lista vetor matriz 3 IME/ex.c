#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
int main () {

char i,stringa[max],stringb[max];

fgets(stringa,sizeof(max),stdin);
//fgets(stringb,sizeof(max),stdin);

for (i=0; i<max; i++) {
        if (stringa[i]="a") {
            stringa[i]="b";
        }

printf("%s",stringa[i]);
    }


//strcmp(stringa,stringb)==0




return 0;
}
