#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

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

int main()
{
    int v[MAX],i;

    srand(time(NULL));
    for(i=0;i<MAX;i++){
        v[i]=rand()%101;
        printf("%d, ",v[i]);
    }

    printf("\nMenor: %d",menor(v,MAX));

    return 0;
}



