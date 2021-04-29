#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char a[20];
int i;


printf("Digite o nome");

fgets(a,sizeof(a),stdin);


for(int i = 0; i < strlen(a); i++) {
    if(a[i] == '\n') {
        a[i] = '\0';
 }
 }

if  (strcmp(a,"rafael")==0) {



    printf("seu nome eh %s entao tio uheuhehue bom nome",a);

}
    else

        printf("vish, seu nome nem eh rafael");





return 0;
}
