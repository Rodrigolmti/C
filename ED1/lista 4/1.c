#include <stdio.h>
#include <stdlib.h>

void populaVet(int n, int *v){
    int i ;

     for (i = 0; i < n; i++){
      scanf("%d", v);
    v++;
        printf(" %p",v);

}
}

int main ( void )
{
   int i, n;
   int *v;
   scanf("%d", &n);
   v = (int*) malloc(n*sizeof(int));
    printf(" %p",v);

  populaVet(n,v);

    printf(" %p",v);

 for (i = 0; i < n; i++){
     printf("\nVetor : [%d] : %d",i+1,*v);
        v++;
 }


   free(v);

   return 0;
}
