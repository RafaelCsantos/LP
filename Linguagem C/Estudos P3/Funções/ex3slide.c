#include <stdio.h>
#include <stdlib.h>

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


int main () {
int n;
    printf("digite o termo");
        scanf("%d",&n);

            printf("%d sequencia %d",n,fib(n));


return 0;
}
