#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 60
#define max1 30

int main ( ) {

char a[max1],b[max1],c[max1],d[max];
int i,n=0;

fgets(a,sizeof(a),stdin);
n=strlen(a);
a[n-1]='\0';


fgets(b,sizeof(b),stdin);
n=strlen(b);
b[n-1]='\0';

for (i=0; i<max1; i++) {
    if (strcmp(b,a)==0) {

    strcpy(d,b);
}
    else {};
}

fgets(c,sizeof(c),stdin);
n=strlen(c);
c[n-1]='\0';

for (i=0; i<max1; i++) {

}


printf("\n %s \n %s \n %s \n %s \n",a,b,c,d);




return 0;
}
