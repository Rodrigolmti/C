#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//int m1=0;
bool validaN(int n,int m);
//void valoresVetor(int vet[][m1],int n,int m);
//void printVet(int *vet,int n,int m);

int main()
{

    int n1=0, m1=0,i,j,n2=0,m2=0;
    do
    {

        if((n2!=n1)&&(m2!=
                      m1))
        {
            printf("\t\tValores de matrizes diferentes !!\n\n");

        }


        do
        {
            printf("\tDigite o valor n e m para popular a MATRIZ 1 :\n");
            scanf("%d %d",&n1,&m1);

        }
        while(!validaN(n1,m1));


        do
        {
            printf("\tDigite o valor n e m para popular a MATRIZ 2 :\n");
            scanf("%d %d",&n2,&m2);

        }
        while(!validaN(n1,m1));



    }
    while(!((n2==n1)&&(m2==m1)));


    int vet1[n1][m1];
    int vet2[n2][m2];
    int vet3[n2][m2];

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




    printf ("\nDigite valor para os elementos da matriz 1 \n\n");

    for ( i=0; i<n1; i++ )
        for ( j=0; j<m1; j++ )
        {
            printf ("\n Elemento [%d][%d] = ", i, j);
            scanf ("%d", &vet1[ i ][ j ]);
        }

    printf ("\nDigite valor para os elementos da matriz 2 \n\n");

    for ( i=0; i<n1; i++ )
        for ( j=0; j<m1; j++ )
        {
            printf ("\n Elemento [%d][%d] = ", i, j);
            scanf ("%d", &vet2[ i ][ j ]);
        }




    for (i = 0; i < n1; i = i + 1)
    {
        for (j = 0; j < m1; j = j + 1)
        {
            vet3[i][j] = vet1[i][j] + vet2[i][j];
            printf("%d ", vet3[i][j]);
        }
        printf("\n");
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


/*void valoresVetor(int vet[][],int n,int m)
{
    int i;
    int j;
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &vet[n][m]);
        }
    }

}

*/
/*void printVet(int *vet,int n,int m)
{
    int i;
    int j;
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {

            printf(" %d ", vet[i][j]);
        }
                printf("\n");
    }
}

*/
