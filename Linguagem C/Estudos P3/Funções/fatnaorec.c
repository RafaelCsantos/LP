#include <stdio.h>
#include <stdlib.h>


int fat (int n) {

int i,fat=1;

for (i=n; i>1; i--) {

    fat=fat*i;

}

return fat;


}





int main () {

int n;

scanf("%d",&n);

printf("%d",fat(n));

return 0;
}
