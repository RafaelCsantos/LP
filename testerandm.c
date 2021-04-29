#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main () {

int r,i=0;

srand(time(NULL));

for (i>0; i<10; i++)
{

r=rand()%6;

printf("%d \n",r);                                                                                                                                                                                       //scanf("%d",&e);

}


return 0;
}
