#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//int m1=0;
bool validaN(int n,int m);
//void valoresVetor(int vet[][m1],int n,int m);
//void printVet(int *vet,int n,int m);

int main()
{

    int n1, m1,i,j;

    do
    {
        printf("\tDigite o valor n e m para popular o Vetor 1 :\n");
        scanf("%d %d",&n1,&m1);

    }
    while(!validaN(n1,m1));

    int vet1[n1][m1];
    int rot[n1][m1];

    /*/  valoresVetor(vet1,n1,m1);


      for(i = 0; i<n1; i++)
      {
          for(j = 0; j<m1; j++)
          {

              printf("Elemento [%d][%d]: ", i+1, j+1);
              scanf("%d", &vet1[n1][m1]);
              printf("%d",vet1[0][0]);

          }
      }

           printf("%d",n1);

      for(i=0;i<n1;i++)
         for(j=0;j<m1;j++){
          printf("%d ",vet1[i][j]);

         }
    */
    int matriz[n1][m1];

    printf ("\nDigite valor para os elementos da matriz\n\n");

    for ( i=0; i<n1; i++ )
        for ( j=0; j<m1; j++ )
        {
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[ i ][ j ]);
        }

    printf("\n\n******************* Saida de Dados ********************* \n\n");

    for ( i=0; i<n1; i++ )
    {
        for ( j=0; j<m1; j++ )
        {
            printf ("%d",matriz[ i ][ j ]);
        }
        printf ("\n");
    }


     for (i=0; i<n1; i++) {
            for (j=0; j<m1; j++) {
                rot[i][j] = matriz[m1 - j - 1][i];
            }
        }

 printf ("\t --- Matriz Rotacionada para direita---\n");


    for ( i=0; i<n1; i++ )
    {
        for ( j=0; j<m1; j++ )
        {
            printf ("%d",rot[ i ][ j ]);
        }
        printf ("\n");
    }


    return 0;
    system("PAUSE");
}


bool validaN(int n, int m)
{

    if((n<=0)||(m<=0))
    {

        printf("\tInformar um valor maior que 0\n" );
        return false;
    }



    return true;
}
