#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int menor(int v[],int n){
    int m1,m2;
    if(n==1)
        return v[0];
    else{
        m1 = menor(v,n/2);
        m2 = menor(v+n/2,n-n/2);
        if(m1<m2)
            return m1;
        else
            return m2;
    }
}

int main () {
srand(time(NULL));

int a[MAX],i;

for (i=0; i<MAX; i++) {
a[i]=rand()%100;
    printf("%d \n",a[i]);
}

printf("\nMenor: %d",menor(a,MAX));



return 0;
}
