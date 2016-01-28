#include <stdlib.h>
#include <stdio.h>


void inserirValores(int n, int *vetor){
    int i ;
     for (i = 0; i < n; i++){
	    printf("Numero [%d] : ", i);
	    printf("%p\n",*(vetor+i));
	    scanf("%d\n", vetor);
	}
}


int *uniao(int *vetor1,int n1, int *vetor2,int n2){
    int *vetor3;
    int i;
    int a = n1 + n2;

    vetor3 = (int*)malloc((a)*(sizeof(int)));


    for(i =0; i<a;i++){
        if(i<n1){
			*(vetor3+i) = *(vetor1+i);
		}
		if(i>=n1){
			*(vetor3+i) = *(vetor2+(i-n1));
		}
	}
return vetor3;

}


int main(){

    int *vetor1,*vetor2,*vetor3;
    int n1,n2;
	int i ;
	printf(" Tamanho vetor 1 : \n");
	scanf("%d", &n1);
    vetor1 =(int*) malloc(n1*sizeof(int));

	if (!vetor1)
    {
        printf ("** Erro: Memoria Insuficiente **");
        exit(1);
    }
        printf(" Tamanho vetor 2 : \n");
        scanf("%d", &n2);

        vetor2 =(int*) malloc(n2*sizeof(int));

	if (!vetor2)
    {
        printf ("** Erro: Memoria Insuficiente **");
        exit(1);
    }

	printf(" Elemento vetor 1 : \n");
    inserirValores(n1,vetor1);

	printf("Elemento vetor 2 : \n");
	inserirValores(n2,vetor2);

	vetor3= uniao(vetor1,n1,vetor2,n2);

	printf("Vetor 3 : \n");
 	for (i = 0; i < (n1+n2); i++){
    	 printf("\nVetor : [%d] : %d",i+1,*vetor3);
         vetor3++;
 	}

free(vetor1);
free(vetor2);
free(vetor3);
}
