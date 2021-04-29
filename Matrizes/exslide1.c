#include <stdio.h>
#include <stdlib.h>

#define M1 2
#define M2 3

int main()
{
    int i,j,total=0,soma=0;
    int mat[M1][M2];

    int somalinha[M1];

    for(i=0;i<M1;i++){
        for(j=0;j<M2;j++){
            printf("mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }


    printf("\nmat=\n");
    for(i=0;i<M1;i++){
        for(j=0;j<M2;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    printf("\nsomalinha=\n");
    for(i=0;i<M1;i++){
        for(j=0;j<M2;j++){
            soma = soma + mat[i][j];
        }
        somalinha[i] = soma;
        soma = 0;
        printf("%d\t",somalinha[i]);
    }

    for(i=0;i<M1;i++)
        total = total + somalinha[i];

    printf("\nTotal= %d\n",total);

    return 0;
}
