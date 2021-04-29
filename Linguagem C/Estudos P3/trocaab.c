#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
int main() {

char a[MAX][20];

int i;

for (i=0; i<MAX; i++) {
gets(a[i]);
}
for (i=0; i<MAX; i++) {

    printf("%s \n",a[i]);
}



return 0;
}
