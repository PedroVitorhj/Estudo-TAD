#include <stdlib.h>
#include "ex2.h"
#include <string.h>
#include <stdio.h>

void linhasMatriz(){

    int l = 0;
    int c = 0;

    printf("\nQuantas colunas tera a matriz: ");
    scanf("%d", &c);

    printf("\nQuantas linhas tera a matriz: ");
    scanf("%d", &l);

    int **p1 = criaMatriz(l,c,1);
    int **p2 = criaMatriz(l,c,2);

    int escolha;

    printf("\n\nDeseja somar ou subtrair as matrizes? \n1 - Para soma;\n2 - Para subtração;\nEscolha: ");
    scanf("%d", &escolha);

    switch(escolha){

        case 1:

            Adicao(p1,p2,l,c);
            break;

        case 2:

            Subtracao(p1,p2,l,c);
            break;

        default:

            printf("VALOR NÃO VALIDO!!");
            break;

    }


}
