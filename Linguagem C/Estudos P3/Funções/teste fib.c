#include <stdio.h>
#include <stdlib.h>

int fib (int n) {
int i,t1=1,t2=1,f;


for (i=3; i<=n; i++) {

    f=t1+t2;
    t1=t2;
    t2=f;

}

return f;


}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d termo: %d",n,fib(n));

    return 0;
    }
