#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d termo: %d",n,fib(n));

    return 0;
}

int fib(int n){
    int f1=1, f2=1, f;
    int i;

    if(n==1 || n==2)
        return 1;
    else{
        for(i=3;i<=n;i++){
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        return f;
    }
}
