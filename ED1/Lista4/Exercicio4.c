#include<stdio.h>
#include<stdlib.h>

int **aloca_linhas(int );
void aloca_colunas (int **, int, int);
void le_dados(int **, int, int );

void main () {
    int **matriz;   
    int lin = 2, col = 2;  

    matriz = aloca_linhas(lin);
    aloca_colunas(matriz,lin,col);
    le_dados(matriz,lin,col);

}

int **aloca_linhas(int lin) {

  int **m;
     m = (int **) malloc (lin * sizeof(int *));

     if (!m) {
        printf("Nao há espaço para alocar memória");
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
  	 printf("\n---------#Vetor com aritimetica de ponteiros---------#\n");
     for (i=0; i<lin; i++)
     {
        printf("Insira a linha -> %d\n", i);
        for (j=0; j<col; j++)
        {
            printf("Numeros %d %d\n", i, j);
            scanf("%d", ((matriz +i) +j));
            printf("\nValor inserido no vetor --> ",*(matriz +i) +j);
        }
     }
}




