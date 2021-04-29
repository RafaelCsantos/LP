#include <stdio.h>
#include <stdlib.h>

int seq(int,int);

int main()
{
    int m,n;
    printf("\n m \n");
    scanf("%d",&m);
    printf ("\n entre com o n\n");
    scanf("%d",&n);

  if (m == 0)
  {
    printf ("A(%d, %d)",m, seq(m,n));
  }
  if (m > 0 && n == 0)
  {
    printf("A (%d, 1)", seq(m,n));
  }

    return 0;
}

int seq(int m, int n)

{
  if (m == 0)
  return n + 1;

  if (m > 0 && n == 0)
  return m - 1;
}
