#include <stdlib.h>
#include <stdio.h>


void populaVet(int n, int *v){
    int i ;
     for (i = 0; i < n; i++){

    printf("Elemento [%d] : ", i);
        printf("%p\n",*(v+i));

      scanf("%d\n", *(v+i));

}
}


int *uniao(int *v1,int n1, int *v2,int n2){
    int *v3;
    int i;

    v3 = (int*)malloc((n1+n2)*(sizeof(int)));


      for(i =0; i<(n1+n2);i++){
        if(i<n1){


                *(v3+i) = *(v1+i);

                }

                if(i>=n1){

                *(v3+i) = *(v2+(i-n1));


                }


        }






    return v3;

}


int main(){

    int *v1,*v2,*v3;
    int n1,n2;
int i ;
printf(" Tamanho vetor 1 : \n");

       scanf("%d", &n1);
        v1 =(int*) malloc(n1*sizeof(int));
if (!v1)
        {
        	printf ("** Erro: Memoria Insuficiente **");
        	exit(1);
        }
       printf(" Tamanho vetor 2 : \n");

       scanf("%d", &n2);

        v2 =(int*) malloc(n2*sizeof(int));
if (!v2)
        {
        	printf ("** Erro: Memoria Insuficiente **");
        	exit(1);
        }
printf(" Elemento vetor 1 : \n");


          populaVet(n1,v1);


printf("Elemento vetor 2 : \n");

          populaVet(n2,v2);


        v3= uniao(v1,n1,v2,n2);

printf("Vetor 3 : \n");
 for (i = 0; i < (n1+n2); i++){
     printf("\nVetor : [%d] : %d",i+1,*v3);
        v3++;
 }









free(v1);
free(v2);
free(v3);


}
