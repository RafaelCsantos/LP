#include <stdio.h>
#include <stdlib.h>


fibo(int n) {

int f;

if (n<1)
    return 1;

    else

f=n*fibo(n-1);


return f;
}



int main () {


int n=5;

printf("%d",fibo(n));

}
