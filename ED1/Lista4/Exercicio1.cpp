#include <stdio.h>
#include <stdlib.h>

void preenche(int num, int *v);

int main()
{
    int tam, *vetor, *aux;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    
    vetor = (int *)malloc(tam*sizeof(int));
    
    printf("\nValor INICIAL AUX do vetor [%p]",aux);
    
    aux=vetor;

    printf("\nValor INICIAL do vetor [%p]",vetor);
    printf("\nValor APOS AUX do vetor [%p]\n\n",aux);
    

    if(!vetor)
    {
       printf("Memoria insuficiente!!!");                 
       return(1);
    }
    
    preenche(tam,vetor);
    
    printf("\nValor FINAL AUX do vetor [%p]\n\n",aux);
    printf("\nValor FINAL VETOR do vetor [%p]\n\n",vetor);
    
    for(int i=0;i<tam;i++)
     {
         printf("\n valores: %d",*vetor);
         printf("\tValor de v[%d] no endereco: [%p]",i,vetor);   
         vetor++;          
     }
     
    printf("\nValor POS FOR FINAL VETOR do vetor [%p]\n\n",vetor);
    
    vetor=aux;
    
    for(int i=0;i<tam;i++)
     {
         printf("\n valores: %d",*vetor);
         printf("\tValor de v[%d] no endereco: [%p]",i,vetor);   
         vetor++;          
     }
     
    free(vetor);
      
    system("pause");
    return 0;    
}

void preenche(int num, int *v)
{
     for(int i=0;i<num;i++)
     {
         printf("\nDigite o valor(%d): ",i+1);
         scanf("%d",v);  
         printf("\tValor de v[%d] no endereco: [%p]",*v,v);
         v++;          
     }
     
     printf("\nValor POS FOR FINAL V do vetor [%p]\n\n",v);
     
}
