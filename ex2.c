#include <stdlib.h>
#include "ex2.h"
#include <string.h>
#include <stdio.h>


int criaMatriz(int l, int c, int g){


    int **p = (int **)malloc(l * sizeof(int *));
    for (int i = 0; i < l; i++)
    {
        p[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            printf("Atribua um valor a posi��o [%d][%d] da matriz %d: ",i,j,g);
            scanf("%d", &p[i][j]);

        }
    }

    printf("\n\n    Matriz %d:\n", g);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("    %d", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return p;

}
