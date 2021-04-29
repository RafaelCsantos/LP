#include <stdio.h>

int main ()
{
  int l1,lf, i, j, primos=0, div=0;

  printf("digite o limite inicial");
        scanf("%d",&l1);

            printf("digite o limite final");
            scanf("%d",&lf);

  for(j=l1; j<=lf; j++){

    for(i=l1; i<=lf; i++){

      if (j%i==0){
	div++;
      }
    }

    if(div==2) {
     primos++; }
    div=0;
  }


    printf("%d",primos);
}
