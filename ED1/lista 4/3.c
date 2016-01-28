#include <stdlib.h>
#include <stdio.h>




void instanciaVet(double **mat,int lin,int col){
int i;



    for( i=0 ; i <lin;i++){

        *(mat  +i) = (double *) malloc(col * sizeof(double));
    }

}

void populaVet(double **mat,int lin,int col){
int i ,j;
    for(i = 0 ; i<lin;i++){
        for(j=0;j<col;j++){
            printf(" Valor para a matriz : [%d][%d] \n",i +1,j);
            scanf("%lf",*(mat +i) +j);



        }

    }

printf("\n\n");


}


void liberarVetor(double **mat,int lin,int col){
        int i;
         for(i = 0 ; i<lin;i++){





    }

        free(mat);

}


void printvetor(double **mat,int lin,int col){
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
      *(*(c +i) +j) = *(*(a +i) +j) + *(*(b +i) +j);
         }
        }

         return c;
  }


int main( ){


    double **m1;
    double **m2;
    double **m3;
    int i , j;
    int lin,col,lin2,col2;


        printf(" Informe o numero de Linhas e Colunas MxN para a matriz 1: \n");

     scanf("%d %d", &lin,&col);


        m1 = (double **) malloc(lin * sizeof(double));
        instanciaVet(m1,lin,col);


        populaVet(m1,lin,col);
        printvetor(m1,lin,col);




        printf(" \n\n\n Informe o numero de Linhas e Colunas MxN para a matriz 2: \n");

     scanf("%d %d", &lin2,&col2);


        m2 = (double **) malloc(lin2 * sizeof(double));
        instanciaVet(m2,lin2,col2);


        populaVet(m2,lin2,col2);
                printvetor(m2,lin,col);


            if(!((lin != lin2)&&(col2!=col))){
                    printf("\n  Matriz Gerada pela soma das demais = \n");
                m3= somarMatrizes(m1,m2,lin,col);
                    printvetor(m3,lin,col);
                            liberarVetor(m3,lin,col);

            }else{
                printf(" \n Matrizes de escalas diferentes !!");
            }


            liberarVetor(m1,lin,col);
            liberarVetor(m2,lin,col);



return 0;
}
