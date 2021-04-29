#include <stdio.h>
#include <stdlib.h>

int multi(int,int);

int main()
{
    int n1,n2;
    printf("\n Entre com o primeiro número \n");
    scanf("%d",&n1);
    printf ("\n Entre com o segundo número \n");
    scanf("%d",&n2);
    printf("%d*%d = %d",n1,n2,mult(n1,n2));
    return 0;
}

int mult(int n1,int n2){
    if(n2==0)
        return 0;
    else
        return n1 + mult(n1,n2-1);
}
