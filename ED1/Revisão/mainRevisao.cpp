#include <stdlib.h>
#include <stdio.h>

void calcMatriz(int tMtx, int tMtx1);

int main()
{
    int tMtx, tMtx1;
	int l,j;
	int soma;
	int cont;
	int a,b,c,d,e;

    printf("Informe o tamanho da matrix: ");
    scanf("%d""%d", &tMtx, &tMtx1);
    int matriz[tMtx][tMtx1];
    int matrizAux[tMtx][tMtx1];
    printf("Informe os numeros para a matrix: ");
      for (a=0; a < tMtx ;a++) 
      {
			for (b=0; b < tMtx1; b++)
          		scanf("%d", &matriz[a][b]);    
      }
      
      for(a=0; a<tMtx;a++)
     {
       for(b=0;b<tMtx1;b++)
       {
         soma =0;
         for(c=b; c<tMtx1;c++) 
         {
           soma = soma + matriz[tMtx][c];
         }
         matrizAux[tMtx][tMtx1] = soma /(tMtx1 - b);
       }
     }
     
     for (d=0; d < tMtx ;d++) 
      {
			for (e=0; e < tMtx1; e++)
          		scanf("%d", &matriz[d][e]);    
      }
      
      for (d=0; d < tMtx ;d++) 
      {
			for (e=0; e < tMtx1; e++)
          		scanf("%d", &matrizAux[d][e]);    
      }
      
      system("PAUSE");
      return 0;
}
