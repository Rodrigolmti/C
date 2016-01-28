#include <stdlib.h>
#include <stdio.h>

void instanciaVetor(double **mat,int lin,int col){
int i;
    for( i=0 ; i <lin;i++){
		*(mat  +i) = (double *) malloc(col * sizeof(double));
    }
}

void inserirValores(double **mat,int lin,int col){
int i ,j;
    for(i = 0 ; i<lin;i++){
        for(j=0;j<col;j++){
            printf("Valores para a matriz : [%d][%d] \n",i +1,j);
            scanf("%lf",*(mat +i) +j);
        }
    }

printf("\n\n");

}


void mostarMatriz(double **mat,int lin,int col){
int i ,j;

    for(i = 0 ; i<lin;i++){
        for(j=0;j<col;j++){
            printf("[%.2f] ",*(*(mat +i) +j));

        }

        printf("\n");
	}
}

double  **somarMatrizes(double **a, double **b, int lin, int col)
{
       double **c;
       int i, j;
       int colaux,linaux;

        c = (double **) malloc(col * sizeof(double));

		for( i=0 ; i <col;i++){
       		*(c  +i) = (double *) malloc(lin * sizeof(double));
    	}

    	for (i = 0; i < lin; i++){
           for (j = 0; j < col; j++){
      			(**(c +i) +j) = (**(a +i) +j) + (**(b +i) +j);
    		}
        }

         return c;
}


int main( ){
    double **matriz1;
    double **matriz2;
    double **matriz3;
    int i , j;
    int lin,col,lin2,col2;

        printf(" Informe as dimensoes para cirar a matriz 1: \n");
     	scanf("%d %d", &lin,&col);

        matriz1 = (double **) malloc(lin * sizeof(double));
        
		instanciaVetor(matriz1,lin,col);
        inserirValores(matriz1,lin,col);

        printf(" \nInforme as dimensoes para cirar a matriz 2: \n");
    	scanf("%d %d", &lin2,&col2);

        matriz2 = (double **) malloc(lin2 * sizeof(double));
        
		instanciaVetor(matriz2,lin2,col2);
        inserirValores(matriz2,lin2,col2);
		
    	matriz3= somarMatrizes(matriz1,matriz2,lin,col);
    	mostarMatriz(matriz3,lin,col);
        
		free(matriz1);
        free(matriz2);
		free(matriz3);

return 0;
}


