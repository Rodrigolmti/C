#include<stdio.h>
#include <stdlib.h>

int main ()
{
        int n,     /* guarda o numero dado    */
        soma;  /* guarda as somas parcias */

        printf("\n\tCalculo da soma dos n primeiros inteiros positivos\n");

        /* Inicializacoes */
        printf("\nDigite o valor de n: ");
        scanf("%d", &n);

        /* Calcula a soma */
        soma = (n * (n + 1)) / 2;

       /* Escreve a resposta */
       printf("A soma dos %d primeiros inteiros positivos e' %d\n", n, soma);

    	
    system("pause");
    return 0;
}
