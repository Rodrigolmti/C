#include <stdlib.h>
#include <stdio.h>

float mediaDeNotas(int n, int *v)
{
  int i;
  float m = 0;
  float soma = 0;
  printf(" %d",v);

  for (i = 0; i < n; i++){
    soma = soma + v;
	v++;
  }
  
  m = soma / n;

  return m;
}

void valoresVetor(int n, int *v){
    int i ;
     for (i = 0; i < n; i++){
    	printf("Nota [%d]  : %p",i,v);
		scanf("%d", v);
		v++;
     }
}

int main(void){
    int i,n;
    float  media;
    float  *vetor;

    printf("----------#Media de Notas#---------");
    printf("\n Informe quantos alunos sao :");

    scanf("%d", &n);
    vetor =(float*) malloc(n*sizeof(float));

    valoresVetor(n,vetor);

    media = mediaDeNotas(n,vetor);
    printf("%.2f", media);
    
	return 0;
}


