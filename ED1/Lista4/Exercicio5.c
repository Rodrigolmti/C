#include<stdio.h>
#include<stdlib.h>

void imprimirMatriz(char **, int , int );

void main () {
     char **matriz;   
     int a, b;  

     imprimirMatriz(matriz,a,b);
}

void imprimirMatriz (char **matriz, int a, int b)
{
     int i, j;

     for (i=0; i<a; i++)
     {
        for (j=0; j<b; j++)
        {
            printf("%s", *(*(matriz +i) +j));

        }
        printf("\n");
     }
}
