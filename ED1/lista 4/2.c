#include <stdlib.h>
#include <stdio.h>

void populaVet(int n, int *v){
    int i ;
     for (i = 0; i < n; i++){
      scanf("%d", v);
v++;
                  printf(" %p",v);

     }
}

float media (int n, int *v)
{
  int i;
  float m = 0, soma = 0;
                  printf(" %p",v);

  for (i = 0; i < n; i++){
    soma = soma + *v;
        v++;

  }
  m = soma / n;

  return m;
}

int main(void){
    int i,n;
    float  m;
    float  *vet;



    printf("\t \\\ Programa media alunos //");
    printf("\n \t informe a quantidade de alunos :");

    scanf("%d", &n);
    vet =(float*) malloc(n*sizeof(float));

    populaVet(n,vet);


   m = media(n,vet);
    printf("%.2f", m);



return 0;
}

