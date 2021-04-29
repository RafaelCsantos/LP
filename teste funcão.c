#include <stdio.h>

int testesoma (int n1, int n2) {

int res;

res=n1+n2;

return(res);

}

int testedois (char t1[]) {
    t1="abcd";

        printf("%s",t1);
return (t1);

}



int main () {

int n1,n2,res,t1;

printf("Digite o primeiro e segundo valores");
scanf("%d %d",&n1,&n2);



res=testesoma(n1,n2);
printf("O resultado eh %d \n",res);


return main();




}
