#include<stdio.h>
#include<stdlib.h>

void imprime_matriz(char **, int, int );

void main () {
     char **matriz;   /* ponteiro para os ponteiros de cada uma das linhas */
     int lin, col;   /* número de linhas e colunas */

    imprime_matriz(matriz,lin,col);
}


void imprime_matriz (char **matriz, int lin, int col)
{
     int i, j;

     for (i=0; i<lin; i++)
     {
        for (j=0; j<col; j++)
        {
            printf("%s", *(*(matriz +i) +j));

        }
        printf("\n");
     }
}
