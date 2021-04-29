#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 4

float media(int v[],int n){
    if(n==1)
        return (float)v[0];
    else
        return (float)(v[0]+(media(v+1,n-1)*(n-1)))/n;
}

int main()
{
    int v[MAX],i;

    srand(time(NULL));
    for(i=0;i<MAX;i++){
        v[i]=rand()%10;
        printf("%d, ",v[i]);
    }

    printf("\nMedia: %f",media(v,MAX));

    return 0;
}
