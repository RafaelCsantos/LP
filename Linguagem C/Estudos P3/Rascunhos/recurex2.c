#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1


int soma(int v[],int n){
    if(n==1)
        return v[0];
    else{
        return v[0]+soma(v+1,n-1);
    }
}

int main () {
srand(time(NULL));

int a[MAX],i;

for (i=0; i<MAX; i++) {
a[i]=rand()%20;
    printf("%d \n",a[i]);
}

printf("\n Soma: %d",soma(a,MAX));



return 0;
}
