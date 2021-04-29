#include <stdio.h>
#include <stdlib.h>

int fibo (int n) {

if ((n==1) || (n==2))
    return 1;
else

return (fibo(n-1) + fibo(n-2));
}


int main () {

int i,n;

scanf("%d",&n);

printf("%d \n \n",fibo(n));

for (i=1; i<=n; i++) {

printf("%d \n",fibo(i));

}


}
