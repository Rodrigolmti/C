#include<stdio.h>
#include<stdlib.h>


int **aloca_linhas(int ); //Voce declarou o metodo como double aqui mais ali em baixo pos int, pelo que testei aqui nÃ£o estava rodando.

void aloca_colunas (int **, int, int);
void le_dados(int **, int, int );

void main () {
     int **matriz;   /* ponteiro para os ponteiros de cada uma das linhas */
     int lin = 2, col = 2;   /* número de linhas e colunas */

    matriz = aloca_linhas(lin);
    aloca_colunas(matriz,lin,col);
    le_dados(matriz,lin,col);

}

int **aloca_linhas(int lin) {

  int **m;
     m = (int **) malloc (lin * sizeof(int *));

     if (!m) {
        puts("Nao há espaço para alocar memória");
        exit(1);
     }
     return m;
}

void aloca_colunas(int **matriz, int lin, int col)
{
  int i;
     for (i=0; i<lin; i++)
     {
        *(matriz +i) = (int *) malloc(col * sizeof (int));
                    printf("%p",*(matriz +i));

        if (! *(matriz+i) ){
           printf("Não há espaço para alocar a linha %d", i);
           exit(1);
        }
     }
}

void le_dados (int **matriz, int lin, int col)
{
  int i, j;
     puts("Entre com os dados");
     for (i=0; i<lin; i++)
     {
        printf("Entre com a linha %d\n", i);
        for (j=0; j<col; j++)
        {
            printf("Elemento %d %d\n", i, j);
            scanf("%d", ((matriz +i) +j));
            printf("\n------------%f------------",*(matriz +i) +j);
        }
     }
}



